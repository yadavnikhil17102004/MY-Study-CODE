#include <stdio.h>
#include <windows.h>

int main()
{
    char wannaplay;
    int randomnum, guessnum, attempts;
    attempts = 0;
    printf("Do you wanna play a game of num guesser ? (y/n) :");
    scanf("%c", &wannaplay);
    if (wannaplay == 'y')
    {
        printf("Lets play !\n");
        randomnum = rand() % 10 +1;
        // randomnum = 10;
        printf("Computer is thinking of a number !! \n");
        Sleep(1000);
        printf("thinking.\n");
        Sleep(1000);
        printf("thinking..\n");
        Sleep(1000);
        printf("thinking...\n");
        Sleep(1000);
        while (randomnum!=guessnum)
        {
            printf("Guess the number :");
            scanf("%d", &guessnum);
            if (randomnum > guessnum)
            {
                printf("Your guess is too low !! \n");
                attempts += 1;
            }
            else if (randomnum < guessnum)
            {
                printf("Your guess is too high !! \n");
                attempts += 1;
            }
        }
        printf("Congratulations you guessed it right !! \n");
        printf("You guessed it right in %d", attempts);
    }
    else
        printf("Thank you for playing with us");
    return 0;
}