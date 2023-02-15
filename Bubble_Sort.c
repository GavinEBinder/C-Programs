#include <stdio.h>

void bubbleSort(char str[], int size){
  int wall = size;
  while(wall >= size){
    for(int i = 0, j = i + 1; j < wall - 1; i++, j++){
      if(str[i] > str[j]){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
    wall--;
  }
}

int main(void) {
  char str[] = "kdjeojrwlnfdjojfnbwpri13";
  printf("%s\n", str);
  int length = 0;
  while(str[length++] != '\0'){
    //bubbleSort(str, length);
    //printf("%s\n", str);
  }
  bubbleSort(str, length);
  printf("%s\n", str);
  return 0;
}