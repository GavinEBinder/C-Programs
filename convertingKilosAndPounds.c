#include <stdio.h>

int main(void) {
  // creating values for the two kilo and pound numbers
  int kilo1, kilo2;
  int pound1, pound2;
  float pound1Tokilo, pound2Tokilo;
  float kilo1Topound, kilo2Topound;
  // getting two kilogram values from the user
  puts("Enter two weights in kilograms:");
  scanf("%d\n%d", &kilo1, &kilo2);
  // getting two values in pounds from the user
  puts("Enter two weights in pounds:");
  scanf("%d\n%d", &pound1, &pound2);
  //setting the conversions for pounds to kilos and kilos to pounds
  pound1Tokilo = pound1 / 2.2;
  pound2Tokilo = pound2 / 2.2;
  kilo1Topound = kilo1 * 2.2;
  kilo2Topound = kilo2 * 2.2;
  // creating the table
  puts("------------------------------------------------------");
  printf("%-9d|%13.1f  |  %-9d|%13.2f\n", kilo1, kilo1Topound, pound1, pound1Tokilo);
  printf("%9d|%13.2f  |  %-9d|%13.3f\n", kilo2, kilo2Topound, pound2, pound2Tokilo);
  puts("------------------------------------------------------");
}