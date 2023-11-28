#include <stdio.h>

int main()
{

    int n = 5, p = 3, q = 4;

    double A[n][p];
    double B[p][q];
    double C[n][q];

    int i, j, k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            A[i][j] = i + j;
        }
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            B[i][j] = i - j;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0.0;
        }
    }

    printf("Matrix A is :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%3.0lf ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%3.0lf ", B[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matrix multiplication is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%3.0lf ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
