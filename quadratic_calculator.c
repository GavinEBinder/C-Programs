#include <stdio.h>
#include <math.h>

int a, b, c;
int discriminant;
int rootA, rootB;


int main(void) {

  puts("Enter the a value for your quadratic");
  scanf("%d", &a);
  puts("Enter the b value for your quadratic");
  scanf("%d", &b);
  puts("Enter the c value for your quadratic");
  scanf("%d", &c);

  discriminant = (pow(b, 2)) - (4 * a * c);
  if (discriminant < 0){
    puts("There are no real roots");
  }
  else if (discriminant == 0){
    printf("You have the root %d", (-b / (2 * a)));
  }
  else {
    rootA = ((-b + sqrt(discriminant)) / (2 * a));
    rootB = ((-b - sqrt(discriminant)) / (2 * a));
    printf("Your two roots are %d and %d", rootA, rootB);
  }
  return 0;
}