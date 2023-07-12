// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {

  int number = 69;
  int guess;
  int guessLimit = 5;
  int guessCounter = 0;
  int outGuesses = 0;

  while(guess != number && outGuesses == 0) {
    if (guessCounter < guessLimit) {
    printf("Enter a number between 0-100: ");
    scanf("%d", &guess);
    guessCounter+=1;
    if (guess != number) {
        printf("Try again!\n");
    }
    } else {
        outGuesses = 1;
    }
  }
  if (outGuesses == 1) {
      printf("Out of guesses :/");
  } else {
      printf("GG.");
  }
  
    return 0;
}
