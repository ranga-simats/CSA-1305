#include <stdio.h>

int main()
{
    int n, i, j, k;
    int a[10][10], closure[10][10];

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            closure[i][j] = a[i][j];
        }
    }

    for (i = 0; i < n; i++)
        closure[i][i] = 1;

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (closure[i][k] == 1 && closure[k][j] == 1)
                    closure[i][j] = 1;
            }
        }
    }

    printf("\nEpsilon Closure:\n");

    for (i = 0; i < n; i++)
    {
        printf("E-closure(q%d) = { ", i);

        for (j = 0; j < n; j++)
        {
            if (closure[i][j] == 1)
                printf("q%d ", j);
        }

        printf("}\n");
    }

    return 0;
}