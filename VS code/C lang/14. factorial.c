#include <stdio.h>

int factorial( int k);
int main()
{
    int k, f;
    printf("Give a value :");
    scanf("%d", &k);
    f = factorial(k);
    printf("The factorial of %d is %d", k, f);
    return 0;
}

int factorial(int k)
{
    if (k == 0 || k == 1)
    {
        return 1;
    }
    else
    {
        return k * factorial(k - 1);
    }
}