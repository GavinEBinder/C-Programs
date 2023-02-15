// calculate the product of numbers from 1 to 10
#include <stdio.h>

int main(void) {

  //while loop
  int counter = 1;
  long long int product = 1;

  while(counter <= 10) {
    product *= counter;
    counter++;
  }
printf("The product is %lld\n", product);
  // for loop
  for(int counter = 1; counter <= 10; counter++) {
    product *= counter;
  }

  for(int c = 100; c > 2; c-=2) {
    printf("%d\n", c);
  }



  


  
  
  return 0;
}