#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(0));
  int n = 10;
  while (n-- >= 0) {
    printf("%d\n", rand() % 10);
  }
  return 0;
}