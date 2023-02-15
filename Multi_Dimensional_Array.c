#include <stdio.h>
#define ROWS 15
#define COLUMNS 15

void print(int arr[][COLUMNS], int rows);

int main(void) {
  //create and intiizalize 2D array
  int arr2D[ROWS][COLUMNS] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
  };

  //print the single element of the 2D array
  //printf("%d\n", arr2D[1][0]);

  //change the element of the 2D array
  //arr2D[2][1] = 10;

  // print the whole 2D array
  /*for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("%5d", arr2D[i][j]);
    }
    puts("");
  }*/

  //initialize whole 2d array
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      arr2D[i][j] = i * j;
    }
  }
/*
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("%5d", arr2D[i][j]);
    }
    puts("");
  }*/
  //print(arr2D, ROWS);

  //read the values to the array
  /*
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 5; j++){
      printf("Enter the vallue for the arr2D[%d][%d]:", i, j);
      scanf("%d", &arr2D[i][j]);
    }
  }*/
  //initialize everything in row 1 to 7
  for(int i = 0; i < COLUMNS; i++){
    arr2D[0][i] = 7;
  }
  print(arr2D, ROWS);
  return 0;
}

void print(int arr[][COLUMNS], int rows){
  // print the whole 2D array
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++){
      printf("%5d", arr[i][j]);
    }
    puts("");
  }
}
