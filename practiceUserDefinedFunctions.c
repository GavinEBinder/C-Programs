#include <stdio.h>


// the function that doesn't return a value and doesn't take a value
void course() {
  puts("You are in COP2271 course!");
}

void courseWithNumber(int courseNumber) {
  printf("You are in COP %d course!", courseNumber);
}

int sumRange(int start, int end){
  int sum = 0;
  for (int i = start; i <= end; i++){
    sum += i;
  }
  return sum;
}


int main(void) {
  
  course();
  courseWithNumber(2271);

  printf("\n%d", sumRange(10, 20));
  return 0;
}