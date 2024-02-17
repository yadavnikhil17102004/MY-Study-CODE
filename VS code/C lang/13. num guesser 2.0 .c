#include <stdio.h>
#include <windows.h>

int play()
{
    int randomnum, guessnum, attempts;
    char changerange;

    attempts = 0;
    randomnum = 10;

    printf("wanna change range ? (y/n) : \n");
    scanf("%c", &changerange);
    getchar();
    if (changerange == 'y')
    {
        printf("Give a range from 1 to ? :");
        scanf(" %d", &randomnum);
    }

    printf("Lets play !\n");
    randomnum = rand() % randomnum + 1;
    printf("Random number is %d\n", randomnum);
    // randomnum = 10;
    printf("Computer is thinking of a number !! \n");
    Sleep(1000);
    printf("thinking.\n");
    Sleep(1000);
    printf("thinking..\n");
    Sleep(1000);
    printf("thinking...\n");
    Sleep(1000);
    while (randomnum != guessnum)
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
    return 0;
}
int main()
{
    char wannaplay;
    printf("Do you wanna play a game of num guesser ? (y/n) :");
    scanf(" %c", &wannaplay);
    getchar();

    if (wannaplay == 'y')
    {
        play();
    }
    else
        printf("Thank you for playing with us");
    return 0;
}
