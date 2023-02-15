#include <stdio.h>

int main(void) {
  int age = 0;

  puts("Enter your age:");
  scanf("%d", &age);

  int ageMinutes;

  ageMinutes = age * 365 * 24 * 60;
  printf("%d years is %d in minutes\n", age, ageMinutes);

  return 0;
}