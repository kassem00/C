import re
from typing import Sequence, Union
import unicodedata
import logging

logging.basicConfig(filename='app.log', level=logging.INFO,
                    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s')
logger = logging.getLogger(__name__)

# match: ## **Title**  OR ## Title
HEADER_RE = re.compile(r'^##\s*(?:\*\*)?(.*?)(?:\*\*)?\s*$')
FENCE_OPEN_RE = re.compile(r'^```c\b', re.IGNORECASE)
FENCE_CLOSE_RE = re.compile(r'^```$')


def file_title(text_list: Union[Sequence[str], str], index: int = 0) -> str:
    s = text_list[index] if isinstance(text_list, (list, tuple)) else text_list
    s = unicodedata.normalize('NFKD', s).encode('ascii', 'ignore').decode()
    s = re.sub(r'[^A-Za-z0-9]+', '_', s)
    s = re.sub(r'_+', '_', s).strip('_')
    return s or 'snippet'


def write_c_code(title: str, text_list, i: int, text_len: int) -> int:
    """
    From position i (somewhere after the header), find the next ```c,
    then dump lines until the closing ```.
    Return the index of the closing fence (or the last checked index).
    """
    # 1) find opening fence
    while i < text_len and not FENCE_OPEN_RE.match(text_list[i]):
        i += 1
    if i >= text_len:          # no code fence found
        logger.info("No ```c block found for %s", title)
        return i

    logger.info("Found ```c for %s at line %d", title, i)
    i += 1  # skip the ```c line

    # 2) write lines until closing fence
    out_name = f"{title}.c"
    with open(out_name, 'w', encoding='utf-8') as fd:
        while i < text_len and not FENCE_CLOSE_RE.match(text_list[i]):
            fd.write(text_list[i] + '\n')
            i += 1

    if i < text_len:  # landed on closing fence
        logger.info("Closed code block for %s at line %d -> %s",
                    title, i, out_name)
    else:
        logger.warning("Unterminated code block for %s", title)

    return i  # caller will increment i again


if __name__ == "__main__":
    with open("the_chatgpt_curse_and_iam_practice.txt", 'r', encoding="utf-8") as f:
        text_list = f.read().splitlines()

    text_len = len(text_list)
    i = 0
    while i < text_len:
        m = HEADER_RE.match(text_list[i])
        if m:
            # Prefer the captured header text (group 1) for file title
            header_text = m.group(1).strip() or text_list[i]
            title = file_title(header_text)
            # Start searching for the code block after the header line
            i = write_c_code(title, text_list, i + 1, text_len)
        i += 1
