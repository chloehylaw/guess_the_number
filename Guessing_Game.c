//
// Created by chloe on 6/16/2021.
//

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int randomNumber = 0;
    int guessedNumber = 0;
    int MAX_GUESS = 5;

    time_t t;

    // Initialize the random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() %21;

    printf("\nThis is a guessing game!");
    printf("\nI have chosen a random  number between 0 and 20. Guess my number!\n");

    for(int numOfGuess = 0; numOfGuess < MAX_GUESS; numOfGuess++)
    {
        printf("\nYou have %d tr%s left.", MAX_GUESS-numOfGuess, numOfGuess == 0 ? "y" : "ies");
        printf("\nEnter a number: ");
        scanf("%d", &guessedNumber);

        // check if guess is correct or not
        if(guessedNumber == randomNumber)
        {
            printf("\nCongratulations! You have guessed my number.");
            break;
        }
        else if(guessedNumber < 0 || guessedNumber > 20) // check if invalid guess
        {
            printf("\nYou have entered an invalid guess. Try again.");

        }
        else if(guessedNumber < randomNumber)
        {
           printf("\nSorry, %d is wrong. My number is greater than that!", guessedNumber);

        }
        else if(guessedNumber > randomNumber) {
            printf("\nSorry, %d is wrong. My number is lesser than that!", guessedNumber);
        }
        else
            printf("\nYou have had 5 tries and failed. My number was %d.\nBetter luck next time.", randomNumber);

    }

    return 0;

}
