#include <stdio.h>

int isprime(int num)
{
    int i;
    for (i = 2; i < num ; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a = 0, b, i;
    printf("Enter the value : ");
    scanf("%d", &b);
    // to find if is prime
    if (isprime(b))
    {
        printf(" %d is prime", b);
    }
    else
    {
        printf(" %d is not prime", b);
    }

    return 0;
}
