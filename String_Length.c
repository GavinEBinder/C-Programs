#include <stdio.h>
#include <ctype.h>
#define SIZE 100

size_t stringLengthIndex(const char s[]); 


int main(void) {
  // initializing an string of characters
  char str[SIZE];
  // asking for a user input for the string
  puts("Enter the string:");
  scanf("%[^\n]", str);
  //prints the string length
  printf("The string length is: %zu", stringLengthIndex(str));
  return 0;
}
//initializing function stringLengthIndex
size_t stringLengthIndex(const char s[]){
  //creates a counter for the string
  int stringCounter = 0;
  // checks if any value in the string is a letter, number or space, and if it is adds 1 to string counter
  for(int i = 0;  i < SIZE; i++){
    if(isalnum(s[i]) || isspace(s[i])){
     stringCounter++; 
    }
  }
  //returns the total value for stringCounter
  return stringCounter;
}
