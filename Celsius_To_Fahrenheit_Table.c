#include <stdio.h>

// Write a program that will print a table of conversions from degrees Celsius to degrees Fahrenheit.

int main(void) {

  // settings variables for Celsius and Fahrenheit temps
  int tempC = -50;
  float tempF;

  // print statements to start the table
  printf("||==================||\n");
  printf("||Celsius|Fahrenheit||\n");

// while temp c is greater than or equal to -50 and less than or equal to 50
  while(tempC >= -50 && tempC <= 50) {

    // first set tempF to the correct conversion for Celsius to Fahrenheit
    tempF = (9.0/5.0)*tempC+32;

    // next printf statement to print the temperatures in a table format.
    printf("||%+d\t|\t%+.1f\t||\n", tempC, tempF);

    // increase original Celsius temperature by 1
    tempC++;
  }
  // final print statement to complete table
  printf("||==================||");

  return 0;
}