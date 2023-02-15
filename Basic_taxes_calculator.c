#include <stdio.h>

int main(void) {
  float salary, taxesPaid;
  puts("Enter salary");
  scanf("%f", &salary);

  taxesPaid=(salary>75000)?(salary - ((salary * 0.8) / 1.1)):(salary - ((salary * 1.7) / 2));
  printf("%f", taxesPaid);
}