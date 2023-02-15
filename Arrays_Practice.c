#include <stdio.h>
#define COLUMNS 4
#define ROWS 2

int main(void) {
  float arr[COLUMNS][ROWS];
  // allows user input for the values of the array
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("Enter value %d, %d of the array\n", j, i);
      scanf("%f", &arr[j][i]);
    }
  }
  // prints the array
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("%.2f\t", arr[j][i]);
    }
    printf("\n");
  }

  //modifies array values
  arr[1][0] = 24.3;
  arr[2][1] = 43.2;

  printf("After Changing the elements the array is:\n");

  // Prints the new array with modified values
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("%.2f\t", arr[j][i]);
    }
    printf("\n");
  }
  // compares smallest to every element, if element is smaller than smallest sets smallest to that element
  float smallest = arr[0][0];
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      if(arr[j][i] < smallest){
        smallest = arr[j][i];
      }
    }
  }
  printf("The smallest element of the array is: %f\n", smallest);

  // sums all the values in the array
  float sum = 0.0;
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      sum += arr[j][i];
    }
  }
  float average = sum / 8;
  printf("The average of all the elements in the array is: %f", average);
  return 0;
}