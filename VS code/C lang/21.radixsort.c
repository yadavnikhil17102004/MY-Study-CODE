#include <stdio.h>

int main()
{
    int a, b, i, temp;
    int x = 1;
    // array for radix sorting
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};

    int n = sizeof(arr) / 4;

    // sorting starts

    do
    {
        for (i = 1; i < n; i++)
        {
            while (i + 1 < n)
            {
                a = (arr[i] / x) % 10;
                b = (arr[i + 1] / x) % 10;
                if (a > b)
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
                i += 1;
            }
        }
        printf("\nThe sorted array is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        x *= 10;
    } while (x < 1000);
    return 0;
}