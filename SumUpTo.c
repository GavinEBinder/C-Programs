#include <stdio.h>

int main(void) {
  int sum = 0;
  int num;
  int counter = 0;

  puts("Enter the number");
  scanf("%d", &num);

  do {
    sum += counter;
    counter += 5;
    
  } while (counter < num);
  printf("The sum is %d", sum);

  
  return 0;
}