#include <stdio.h>

void modifyArray(const int arr[], int size);

int firstZero(const int arr[], int size);
int firstZero(const int arr[], int size);
int lastZero(const int arr[], int size);

int main(void) {
  int a[] = {1, 2, 3, 0, 4, 0, 5};

  modifyArray(a, 5);
/*
  for(int i = 0; i < 5; i++){
    printf("%d ", a[i]);
  }
  */

  printf("The index of first zero is %d\n", firstZero(a, 7));
  printf("The index of last zero is %d\n", lastZero(a, 7));
  
  return 0;
}

void modifyArray(const int arr[], int size){
  for(int i = 0; i < size; i++){
    printf("%d\n", arr[i] * 2);
  }
}

int firstZero(const int arr[], int size){
  for(int i = 0; i < size; i++){
    if (arr[i] == 0){
      return i;
    }
  }
  return -1;
}

int lastZero(const int arr[], int size){
  for(int i = size - 1; i >= 0; i--){
    if (arr[i] == 0){
      return i;
    }
  }
  return -1;
}

int secondZero(const int arr[], int size){
  
}