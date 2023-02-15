#include <stdio.h>

int main(void) {

  char ch;
  int num;
  int option;

  puts("Enter the character");
  scanf("%c", &ch);

  puts("Enter the number");
  scanf("%d", &num);

  puts("Enter the option");
  scanf("%d", &option);

  for (int i = 0; i < num; i++) {
    (option == 1) ? printf("%c", ch) : printf("%c\n", ch);
  }






  
  return 0;
}