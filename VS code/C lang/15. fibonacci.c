#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int gereratefibonacci(int terms)
{
    printf("Fibonacci terms :");
    for (int i = 0; i < terms; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}

int main()
{
    int terms;
    printf("Enter the number if terms in the fibonacci series;");
    scanf(" %d", &terms);
    gereratefibonacci(terms);
    return 0;
}