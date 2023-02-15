#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery(int lotteryPick[]){
  int winningNumbers[2] = {0};
  for(int i = 0; i < 2; i++){
    winningNumbers[i] = rand() % 9 + 1;
  }
  printf("The lottery number is %d%d\n", winningNumbers[0], winningNumbers[1]);
  if (lotteryPick[0] == winningNumbers[0] && lotteryPick[1] == winningNumbers[1]){
    printf("Exact match: you win $10,000\n");
  }
  else if (lotteryPick[0] == winningNumbers[0] || lotteryPick[1] == winningNumbers[0] && lotteryPick[0] == winningNumbers[1] || lotteryPick[1] == winningNumbers[1]){
  printf("Matched not exactly: you win $3,000\n");
  }
  else if (lotteryPick[0] == winningNumbers[0] || lotteryPick[1] == winningNumbers[1] || lotteryPick[1] == winningNumbers[0] || lotteryPick[0] == winningNumbers[1]){
    printf("Matched one digit: you win $1,000\n");
  }  
  else {
    printf("Sorry, no match");
  }
}
int main(void) {
  srand(time(0));
  int arr[2] = {0};
  int userPick[2];
  puts("Enter your lottery pick (two digits)");
  scanf("%d%d", &userPick[0], &userPick[1]);
  lottery(userPick);
  return 0;
}