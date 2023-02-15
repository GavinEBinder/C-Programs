#include <stdio.h>

int main(void) {

  int count = 0;
  int nRows, nColumns;
  puts("Enter the number of rows and the number of columns");
  scanf("%d%d", &nRows, &nColumns);

  for(int i = 0; i < nRows; i++){
    for(int j = 0; j < nColumns; j++) {
      if (j == 0 || j == nColumns-1 || i == nRows-1 || i == 0) {
        printf("%c", '*');
      }
      else {
        printf(" ");
      }
    }
    puts("");
  }

  return 0;
}