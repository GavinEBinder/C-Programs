#include <stdio.h>

int main(void) {

  // setting int number variable
  int number = 1;

// asking user to input a value greater than 1 for number variable
  puts("Enter a value greater than 1");
  scanf("%d", &number);

// while that number is greater than 0, print that number and then decrease by 1
  while (number > 0) {
    printf("%d\n", number);
    number--;
  }
  return 0;
}