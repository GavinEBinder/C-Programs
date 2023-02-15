#include <stdio.h>

int main(void) {
  int input = 0;

  do {
    puts("Enter the number > 100");
    scanf("%d", &input);
  } while(input <= 100);
  


    
  return 0;
}