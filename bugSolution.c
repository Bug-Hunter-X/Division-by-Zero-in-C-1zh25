#include <stdio.h>

int main() {
  int x = 5;
  int y = 0;
  int z = 0;

  if (y != 0) {
    z = x / y;
    printf("The result is %d\n", z);
  } else {
    printf("Error: Division by zero is not allowed.\n");
  }

  return 0;
}
