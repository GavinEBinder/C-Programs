#include <stdio.h>

double power( base, exponent){
  if (exponent == 0){
    return 1;
  }
  else if (exponent < 0){
    return (double) ((double) 1 / base) * power(base, exponent + 1);
  }
  else {
    return base * power(base, exponent - 1);
  }
  
}



int main(void) {
  printf("%d to the %d is %.3f\n", 3, -5, power(3,-5));
  
  return 0;
}





