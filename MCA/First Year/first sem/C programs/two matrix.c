#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a[10][10], b[10][10], d[10][10], r, c;
    system("cls");
    printf("enter the row");
    scanf("%d", &r);
    printf("enter the column");
    scanf("%d", &c);
    printf("enter the element for first array=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf(" %d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("enter the element for second array=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf(" %d \t", b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            d[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                d[i][j] = d[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("  -Result-\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf(" %d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}