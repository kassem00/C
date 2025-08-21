#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * calc_arg_values - Calculate result from argv values using an operation
 * @optind: current index in argv after getopt() parsing
 * @optarg: the first argument passed with the option
 * @argc: argument count
 * @argv: argument vector
 * @op: function pointer that applies the operation
 *
 * Return: the result of the calculation.
 */
int calc_arg_values(int optind, char *optarg, int argc, char **argv,
                    int (*op)(int, int)) {
  int result = atoi(optarg);
  int i;

  for (i = optind; i < argc && argv[i][0] != '-'; i++) {
    int val = atoi(argv[i]);
    result = op(result, val);
  }
  return (result);
}

/* operation functions */
int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }
int sub(int a, int b) { return a - b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main(int argc, char *argv[]) {
  int opt;

  while ((opt = getopt(argc, argv, "a:m:s:d:h")) != -1) {
    int result = 0;
    switch (opt) {
    case 'a':
      result = calc_arg_values(optind, optarg, argc, argv, add);
      printf("Sum = %d\n", result);
      break;
    case 'm':
      result = calc_arg_values(optind, optarg, argc, argv, mul);
      printf("Product = %d\n", result);
      break;
    case 's':
      result = calc_arg_values(optind, optarg, argc, argv, sub);
      printf("Subtraction = %d\n", result);
      break;
    case 'd':
      result = calc_arg_values(optind, optarg, argc, argv, divide);
      printf("Division = %d\n", result);
      break;

    case 'h':
      printf("NAME\n");
      printf("    calc - simple command-line calculator\n\n");

      printf("SYNOPSIS\n");
      printf("    %s [OPTION] [NUMBERS...]\n\n", argv[0]);

      printf("DESCRIPTION\n");
      printf("    A lightweight command-line calculator that performs basic "
             "arithmetic.\n");
      printf(
          "    Operations are applied in the order provided to NUMBERS.\n\n");

      printf("OPTIONS\n");
      printf("    -a NUMS     Add numbers\n");
      printf("    -m NUMS     Multiply numbers\n");
      printf("    -s NUMS     Subtract numbers (in order)\n");
      printf("    -d NUMS     Divide numbers (in order)\n");
      printf("    -h          Display this help and exit\n\n");

      printf("EXAMPLES\n");
      printf("    %s -a 2 3 5\n", argv[0]);
      printf("           # Add 2 + 3 + 5 = 10\n\n");
      printf("    %s -m 2 3 4\n", argv[0]);
      printf("           # Multiply 2 * 3 * 4 = 24\n\n");
      printf("    %s -s 10 3 2\n", argv[0]);
      printf("           # Subtract 10 - 3 - 2 = 5\n\n");
      printf("    %s -d 100 5 2\n", argv[0]);
      printf("           # Divide 100 / 5 / 2 = 10\n\n");
      break;

    default:

      printf("NAME\n");
      printf("    calc - simple command-line calculator\n\n");

      printf("SYNOPSIS\n");
      printf("    %s [OPTION] [NUMBERS...]\n\n", argv[0]);

      printf("DESCRIPTION\n");
      printf("    A lightweight command-line calculator that performs basic "
             "arithmetic.\n");
      printf(
          "    Operations are applied in the order provided to NUMBERS.\n\n");

      printf("OPTIONS\n");
      printf("    -a NUMS     Add numbers\n");
      printf("    -m NUMS     Multiply numbers\n");
      printf("    -s NUMS     Subtract numbers (in order)\n");
      printf("    -d NUMS     Divide numbers (in order)\n");
      printf("    -h          Display this help and exit\n\n");

      printf("EXAMPLES\n");
      printf("    %s -a 2 3 5\n", argv[0]);
      printf("           # Add 2 + 3 + 5 = 10\n\n");
      printf("    %s -m 2 3 4\n", argv[0]);
      printf("           # Multiply 2 * 3 * 4 = 24\n\n");
      printf("    %s -s 10 3 2\n", argv[0]);
      printf("           # Subtract 10 - 3 - 2 = 5\n\n");
      printf("    %s -d 100 5 2\n", argv[0]);
      printf("           # Divide 100 / 5 / 2 = 10\n\n");
    }
  }
  return (0);
}
