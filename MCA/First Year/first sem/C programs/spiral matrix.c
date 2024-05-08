#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter the array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 3; k++)
            {
                if (a[i][k] < a[i][j])
                {
                    int temp = a[i][k];
                    a[i][k] = a[i][j];
                    a[i][j] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 3; k++)
            {
                if (a[k][i] < a[j][i])
                {
                    int temp = a[k][i];
                    a[k][i] = a[j][i];
                    a[j][i] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}