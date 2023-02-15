#include <stdio.h>

int main(void) {
  int Z = 0;
  int x = 0;
  int y = 0;

  printf("Enter value for x:\n");
  scanf("%d", &x);

  printf("Enter value for y:\n");
  scanf("%d", &y);

  Z = (2 * x) + (3 * y);
  printf("The value of Z is: %d\n", Z);
}