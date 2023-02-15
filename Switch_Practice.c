#include <stdio.h>

int main(void) {
  
  char ch;

  do {
    puts("Enter the character:");
    scanf(" %ch", &ch);

    switch(ch) {
      case 'A':
        puts("You entered A");
        break;
      case 'b':
      case 'B':
        puts("You entered b or B");
        break;
      case 'C':
        puts("You entered C");
        break;
      default:
        puts("There is no such option");
    }
  } while(ch != 'A');
  
  return 0;
}