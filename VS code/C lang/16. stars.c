#include<stdio.h>

void stars(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    
}

int gereratestarline(int terms)
{
    printf("stars :\n");
    for (int i = 1; i <= terms; i++)
    {
        stars(i);
    }

    return 0;
}

int main()
{
    int terms;
    printf("Enter the number if star line :");
    scanf(" %d", &terms);
    gereratestarline(terms);
    return 0;
}