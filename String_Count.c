#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

void count(const char str[]);

int main(void) {
  // initializing the string
  char str[SIZE];
  //asking for an input from the user for the string
  puts("Enter the string:");
  scanf("%[^\n]", str);
  //calling function count
  count(str);
  return 0;
}

// creating function count to count the uppercase, lowercase, digits, and space characters in a string
void count(const char str[]){
  //initializing variables for lengths and counters
  int length = strlen(str);
  int upperCounter = 0;
  int lowerCounter = 0;
  int digitCounter = 0;
  int spaceCounter = 0;
  // for loop checks each value of the string at ith position and whether that values is uppercase, lowercase, a digit, or a space
  for(int i = 0; i < length; i++){
    if(isupper(str[i])){
      upperCounter++;
    }
    if(islower(str[i])){
      lowerCounter++;
    }
    if(isdigit(str[i])){
      digitCounter++;
    }
    if(isspace(str[i])){
      spaceCounter++;
    }
  }
  // prints the number of uppercase, lowercase, digits, and spaces for the string
  printf("Number of upper case letters in the string is: %d\n", upperCounter);
  printf("Number of lower case letters in the string is: %d\n", lowerCounter);
  printf("Number of digits in the string is: %d\n", digitCounter);
  printf("Number of whitespace characters in the string is: %d\n", spaceCounter);
}