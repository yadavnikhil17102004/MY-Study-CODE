#include <stdio.h>

int main()
{
    // input a char from user
    char c;
    char Alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    printf("Input some char :");
    scanf("%c", &c);
    // check if the char is uppercase or lowercase
    int isupper = 0;
    int upcount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (c == Alpha[i])
        {
            isupper = 1;
            upcount = i+1;
            break;
        }
    }

    if (isupper)
    {
        printf("The char is uppercase \n");
        printf("The charcount is %d", upcount);
    }
    else
    {
        printf("The char is lowercase");
    }
    return 0;
}