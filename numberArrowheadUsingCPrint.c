#include <stdio.h>

int main(void) {
  
  int bodyNumber = 0;
  int arrowNumber = 0;

  printf("Enter the number for arrow body:\n");
  scanf("%d", &bodyNumber);

  printf("Enter the number for arrow head:\n");
  scanf("%d", &arrowNumber);
  
  
  printf("\t%d\n", arrowNumber);
  printf("\t%d%d\n", arrowNumber, arrowNumber);
  
  printf("%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, 
  arrowNumber, arrowNumber, arrowNumber);
  printf("%d%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, arrowNumber, arrowNumber, arrowNumber, arrowNumber);
  printf("%d%d%d%d%d%d%d\n", bodyNumber, bodyNumber, bodyNumber, bodyNumber, arrowNumber, arrowNumber, arrowNumber);
  
  printf("\t%d%d\n", arrowNumber, arrowNumber);
  printf("\t%d\n", arrowNumber);

}