#include <stdio.h>

int main(void) {
//create an array
  int arr[10];
  int temp = 10;
  // access to a specific element of the array
  //arr[0] = 10;
  //arr[1] = 5;
  //printf("%d\n", arr[0]);
  // initialize all the elements of the array
  for(int i = 0; i < 10; i++){
    arr[i] = temp;
    temp += 10;
  }

  //print the array
  for(int i = 0; i < 10; i++){
    printf("%d, ", arr[i]);
  }
  
  return 0;
}