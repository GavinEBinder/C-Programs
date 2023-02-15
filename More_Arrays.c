#include <stdio.h>
#define SIZE 11
void printReversed(float arr[], int size){
  puts("Elements of the array in the reverse order are:");
  for(int i = 10; i > -1; i--){
    printf("%13.1f\n", arr[i]);
  }
}

float sumFirstLast(float arr[], int size){
  for(int i = 1; i < SIZE; i++){
    arr[i] = arr[i - 1] + 0.1;
  }
  printf("The sum of the first and last elements is %.2f", arr[0] + arr[10]);
  return arr[1] + arr[10];
}

int main(void) {
  float a[SIZE] = {1.0};
  float arr[SIZE] = {1.0};
  for(int i = 1; i < SIZE; i++){
    a[i] = a[i - 1] + 0.1;
  }

  puts("Elements of the array are: ");
  for(size_t i = 0; i < SIZE; i++){
    printf("%13.1f\n", a[i]);
  }
  
  printReversed(a, SIZE);
  sumFirstLast(a, SIZE);
}