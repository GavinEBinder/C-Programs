#include <stdio.h>

int main(void) {

  int firstNumber, secondNumber, sum, product, difference, quotient;
  char operation;
  
  printf("Enter the operation:\n");
  scanf("%c", &operation);

  printf("Enter two integer numbers:\n");
  scanf("%d\n%d", &firstNumber, &secondNumber);

  sum = firstNumber + secondNumber;
  product = firstNumber * secondNumber;
  difference = firstNumber - secondNumber;
  quotient = firstNumber / secondNumber;

  if (operation == '+') {
    printf("%d+%d=%d\n", firstNumber, secondNumber, sum);
  }

  if (operation == '-') {
    printf("%d-%d=%d\n", firstNumber, secondNumber, difference);
  }

  if (operation == '*') {
    printf("%d*%d=%d\n", firstNumber, secondNumber, product);
  }

  if (operation == '/') {
    printf("%d/%d=%d\n", firstNumber, secondNumber, quotient);
  }

}