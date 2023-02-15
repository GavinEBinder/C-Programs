#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(0));
  int arr[20];
  for(int i = 0; i < 20; i++){
    arr[i] = (rand() % 41) - 20;
  }

  for(int i = 0; i < 20; i++){
    if(arr[i] < 0){
      arr[i] = 0;
    }
  }
  
  for(int i = 0; i < 20; i++){
    printf("%d, ", arr[i]);
  }
  
  return 0;
}