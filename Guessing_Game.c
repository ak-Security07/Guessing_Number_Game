#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int random, guess;
  int no_of_guess = 0;
  srand(time(NULL));

  printf("Welcome to the Guessing Number Game\n");
  random = rand() % 100 + 1; // generate a random number between 1 and 100
  
  
  do  {
    printf("\nEnter a number between 1 to 100: ");
    scanf("%d", &guess);
    no_of_guess++;

    if (guess > random) {
      printf("Too low. \n");
    } else if (guess < random)  {
      printf("Too high. \n");
    } else {
      printf("You guessed it in %d attempts", no_of_guess);
    }

  } while (guess != random);
  
  printf("\n Bye, Thanks for playing.");
  printf("\n Have a nice day");
  printf("\n Developed by: Nikhil Singh");

  
}