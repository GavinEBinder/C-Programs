#include <stdio.h>
#include <ctype.h>

int main(void) {
  char c;
  puts("Enter the character");
  scanf("%c", &c);

  printf("isblank('%c') = %d\n", c, isblank(c));
  printf("isdigit('%c') = %d\n", c, isdigit(c));
  printf("isalpha('%c') = %d\n", c, isalpha(c));
  printf("isalnum('%c') = %d\n", c, isalnum(c));
  
  
  return 0;
}