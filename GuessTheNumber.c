#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    int randomNumber = rand() % 21;
    unsigned int lives = 5;
    unsigned int userNumber = 0;

    printf("Guessing game!\n");
    printf("You must choose a number between 0 and 20!\n");

    for (lives = 5; lives >0; --lives)
    {
        printf("You have %d lives!\n", lives);
        printf("Enter your number: ");
        scanf("%d", &userNumber);
       
        if(userNumber<0||userNumber>20)
        {
            printf("The number is between 0 and 20!");
        }
        else if(userNumber>randomNumber)
        {
            printf("That number is too high!");
        }
        else if(userNumber<randomNumber)
        {
            printf("That number is too low!");
        }
        else if(userNumber==randomNumber)
        {
            printf("Congrats you have won! The answer was %d!", randomNumber);
            return 0;
        } 
    }
    
    printf("You have no lives left, the answer was %d!", randomNumber); 

    return 0;
}