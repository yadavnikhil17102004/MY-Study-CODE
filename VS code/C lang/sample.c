#include <stdio.h>
int main()
{
    int i, j;
    // array for bubble sorting
    int arr[] = {44, 77, 35, 2, 30, 96, 20, 58, 23, 10};
    int n = sizeof(arr)/4;
    // sorting starts
    for (int i = 0; i < n ; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            int a = arr[i];
            int b = arr[j];

            if (b > a)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The sorted array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}