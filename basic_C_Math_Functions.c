#include <stdio.h>
#include <math.h>

int main(void) {
  printf("\tx\tsin(x)\tcos(x)\ttan(x)\texp(x)\n");
  puts("---------------------------------------");
  float x = -3.14;
  while(x <= 3.14) {
    printf(" %6.2f %6.2f %6.2f %6.2f %6.2f\n", x, sin(x), cos(x), tan(x), exp(x));
    x += (3.14 / 5);
  }




  
  return 0;
}