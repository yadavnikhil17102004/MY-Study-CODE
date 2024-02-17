#include <stdio.h>

int main()
{
    int n, m, p, q;

    // Get dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d%d", &n, &m);

    int a[n][m];

    // Get elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Get dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d%d", &p, &q);

    int b[p][q];

    // Get elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (m == p)
    {
        int result[n][q];

        // Perform matrix multiplication
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                result[i][j] = sum;
            }
        }

        // Display the result matrix
        printf("Resultant matrix after multiplication:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible with given dimensions.\n");
    }

    return 0;
}
