#include <stdio.h>

int main()
{
    // input year to calculate leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    // checking if the year is leap year or not
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
        else
        {
            printf("%d is a leap year", year);
        }
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}