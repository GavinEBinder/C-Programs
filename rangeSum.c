#include <stdio.h>

int sum = 0;
int x, y;

int sumOfRange(int start, int end){
  if (start > end){
    return sum;
  }
  sum += start;
  start++;
  sumOfRange(start, end);
  return sum;
}

int main(void) {
  puts("Enter the start of the range:");
  scanf("%d", &x);
  puts("Enter the end of the range:");
  scanf("%d", &y);
  
  printf("The sum of the numbers in the range is %d\n", sumOfRange(x, y));
  return 0;
}