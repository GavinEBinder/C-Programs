#include <stdio.h>

int largest(int num1, int num2, int num3) {
  if (num1 > num2 && num1 > num3) {
  return num1;  
  }
  else if(num2 > num1 && num2 > num3) {
    return num2;
  }
  else {
    return num3;
  }
  
}

int main(void) {
  int n1, n2, n3;
  puts("Enter three numbers");
  scanf("%d\n%d\n%d", &n1, &n2, &n3);

  
  printf("The largest number is %d", largest(n1, n2, n3));
  

  
  return 0;
}