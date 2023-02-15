#include <stdio.h>

int main(void) {
  int sum = 0;
  int input = -1;

  while(input != 0) {
    puts("Enter the numbers for the addition (0 is to exit)");
    scanf("%d", &input);
    sum += input;
  }

  printf("The sum is %d\n", sum);


  return 0;
}