// Write a program that asks the user to eneter a temperature value and prints the appropriate activity
#include <stdio.h>

int main(void) {

  // set variable for temperature
  int temp = 0;

  // ask for the temperature outside
  puts("Enter the temperature:");
  scanf("%d", &temp);

// Set if and else if statements to print different activities for different temperature values.
  if (temp >= 80) {
    printf("Your activity will be swimming!");
  }
  else if (temp > 60 && temp < 79) {
    printf("Your activity will be soccer!");
  }
  else if (temp > 40 && temp < 59) {
    printf("Your activity will be volleyball!");
  }
  // If none of the others are true, last activity is skiing
  else {
    printf("Your activity will be skiing!");
  }
  return 0;
}