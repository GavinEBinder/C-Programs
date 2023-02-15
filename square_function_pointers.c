#include <stdio.h>

void square(int* nPtr){
  *nPtr *= *nPtr;
  printf("The address of nPtr in square %p\n", nPtr);
}

int main(void) {
  int n = 17;
  printf("The address of n in main %p\n", &n);
  square(&n);

  printf("%d\n", n);
  
  return 0;
}