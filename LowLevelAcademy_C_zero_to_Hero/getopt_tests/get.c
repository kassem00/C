
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  int opt;

  // The options string: "a:b:c"
  // a: → option 'a' takes an argument
  // b: → option 'b' takes an argument
  // c  → option 'c' has no argument
  while ((opt = getopt(argc, argv, "a:b:m:s:d:h")) != -1) {
    switch (opt) {
    case 'a':
      printf("Option a with value: %s\n", optarg);
      break;
    case 'm':
      printf("Option b with value: %s\n", optarg);
      break;
    case 's':
      printf("Option c (no value)\n");
      break;
    case 'd': // Unknown option or missing value
      printf("Unknown option: %c\n", optopt);
      break;
    case 'h': // Unknown option or missing value
      printf("Unknown option: %c\n", optopt);
      break;

    default:
      printf("Usage: %s [-a value] [-b value] [-c]\n", argv[0]);
    }
  }

  // Print remaining non-option arguments
  if (optind < argc) {
    printf("Remaining arguments:\n");
    for (int i = optind; i < argc; i++) {
      printf("  %s\n", argv[i]);
    }
  }

  return 0;
}
