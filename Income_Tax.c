#include <stdio.h>

int main(void) {
  // setting variables for income and age
  int income, age, taxesPayed;

// asking for user to enter their income
  puts("Please enter your income:");
  scanf("%d", &income);

// asking for user to enter their age
  puts("Please enter your age:");
  scanf("%d", &age);

  // if income is less than 50000 there is no income tax
  if (income <= 50000) {
    printf("You have no income tax to pay!");
  }
    
    //if income is greater than 50000 and less than 100000, taxes payed is equal to income times .07 (7 percent)
  else if (income > 50000 && income <= 100000) {
    taxesPayed = income * .07;

    // if age is greater than 60, and you have an income tax, you pay $335 less in taxes
    if(age >= 60) {
      printf("You will pay $%d in taxes.", taxesPayed - 335);
    }
      //else you will pay the normal tax amount
    else {
      printf("You will pay $%d in taxes.", taxesPayed);
    }
  }
  else {  // if income is greater than 100000, then you pay a 9 percent tax and if your age is greater than 60, you pay $335 less in taxes.
    taxesPayed = income * .09;
      if(age >= 60) {
        printf("You will pay $%d in taxes.", taxesPayed - 335);
    }
      else { 
        printf("You will pay $%d in taxes.", taxesPayed);
    }
  }
  return 0;
}