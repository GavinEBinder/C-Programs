#include <stdio.h>

int main(void) {
  float weight, height, bodyMass;
  //Asking for weight in pounds
  puts("Enter your weight in pounds");
  scanf("%f", &weight);
// asking for height in inches
  puts("Enter your height in inches");
  scanf("%f", &height);
  //convert for bmi
  weight = weight * .45;
  height = height * .0254;
  bodyMass = (weight / (height*height));
  printf("Your body mass is %f", bodyMass);
  

}