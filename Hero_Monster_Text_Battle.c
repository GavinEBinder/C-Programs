#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


void printYouWin(){ //user created function to print winning statement
  printf("\nYOU WIN!!!");
}
void printYouLose(){ //function created to print losing statement
  printf("\nYou lose.");
}
int monsterAttacks(){ // monster attacks function to set monsterDamage variable equal to a number 1-6
  int monsterDamage = 1 + rand() % 6;
  if (monsterDamage == 6) { //if statement that doubles monster damage if it is equal to 6
    monsterDamage *= 2;
  }
  if (monsterDamage == 1){ //if statement that decreases monster damage by 1 if it is equal to 1 (no damage)
    monsterDamage -= 1;
  }
  return monsterDamage; //function returns the monster damage
}
int weaponDamage = 0; //initalizing weapon damage
int heroAttacks(int weaponCode){ //function for the hero attacks
  int baseAttack = 1 + rand() % 5; //sets a base damage 1-5
  switch(weaponCode) { //switch statements for different weapons, each doing a different amount of damage
    case 0:
      weaponDamage += -1; 
      printf("\nThe hero is fighting with a fist!\n");
      break;
    case 1:
      weaponDamage += 1; 
      printf("\nThe hero is fighting with a sword!\n");
      break;
    case 2:
      weaponDamage += 3;
      printf("\nThe hero is fighting with a gun!\n");
      break;
 }
  return(baseAttack + weaponDamage); //returns the total amount of damage done by the hero
}
int main(void) {
  srand(time(0));
  int heroHealth = 30;
  int monsterHealth = 30;
  int roundNumber = 0;
  
  while (heroHealth > 0 && monsterHealth > 0) {

    puts("\n---------------------------------------");
    printf("ROUND %d", roundNumber += 1); // changes round number for each loop
    int totalAttack = heroAttacks(rand() % 3); //sets totalAttack to hero attack calling a random weapon
    int totalMonsterAttack = monsterAttacks(); // sets the totalMonsterAttack to monsterAttacks
    monsterHealth -= totalAttack; // monsterHealth is decremented by total hero attack each round
    if(monsterHealth <= 0) { // if monster health is less than or equal to 0 sets monster attack damage to 0, so that it cannot attack after it dies
      totalMonsterAttack = 0;
    }
    heroHealth -= totalMonsterAttack; //heroHealth decremented by the total monster damage attack damage each round
    // print statements to show each rounds weapon, damage numbers, and health numbers
    printf("Hero attacks with %d damage;       \t\t", totalAttack);
    printf("Monster's health is %d HP\n", monsterHealth);
    printf("Monster attacks with %d damage;\t\t", totalMonsterAttack);
    printf("\tHero's health is %d HP", heroHealth);
    if (heroHealth <= 0) { // if hero health is less than or equal to zero, calls function printYouLose() and exits while loop
      printYouLose();
      break;
    }
    else if (monsterHealth <= 0){ // if monster health <= 0 call function printYouWin() and exit the while loop
      printYouWin();
      break;
    }
  }
  return 0;
  }
  