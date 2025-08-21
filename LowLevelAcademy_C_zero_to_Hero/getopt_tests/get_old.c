
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * calc_arg_values - Calculate result from remaining argv values
 * @optind: current index in argv after getopt() parsing
 * @optarg: the first argument passed with the option
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: This function collects the remaining arguments after
 * getopt() parsing, converts them to integers, and performs the
 * requested operation depending on the option used in main().
 *
 * Return: the result of the calculation.
 */
int calc_arg_values(int optind, char optarg[], int argc, char **argv) {
  int result = 0;
  for (int i = optind - 1; i < argc && argv[i][0] != '-'; i++) {
    result += atoi(argv[i]);
    printf("%d \n", atoi(argv[i]));
    optind++;
  }
  printf("  extra number: %d\n", result);
}
int main(int argc, char *argv[]) {
  int opt;

  while ((opt = getopt(argc, argv, "a:b:m:s:d:h")) != -1) {
    switch (opt) {
    case 'a':
      calc_arg_values(optind, optarg, argc, argv);
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
