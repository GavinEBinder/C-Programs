#include <stdio.h>

int main(void) {

  int num;
  float sum = 0.0;
  int average;
  float counter = 0.0;
  int option;
// infinite loop

  for( ; ; ) {
    puts("Enter the number (-1 to exit)");
    scanf("%d", &num);

    if (num == -1) {
      break;
    }
    if (num > 100 || num < -100) {
      continue;
    }
    sum += num;
    counter++;
    }
    puts("Enter 1 for sum and 2 for average");
    scanf("%d", &option);
    
    switch (option) {
      case 1:
        printf("Your sum is %.1f", sum);
        break;
      case 2:
        printf("Your average is %.1f", sum / counter);
        break;
    }



  return 0;
}