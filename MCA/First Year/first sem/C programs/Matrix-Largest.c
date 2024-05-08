#include <stdio.h>
void rowLargest(int A[3][3])
{
    int max;
    for (int i = 0; i < 3; i++)
    {
        max = A[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (max < A[i][j])
            {
                max = A[i][j];
            }
        }
        printf("%d", max);
        printf("\n");
    }
}
void colLargest(int A[3][3])
{
    int max;
    for (int i = 0; i < 3; i++)
    {
        max = A[0][i];
        for (int j = 0; j < 3; j++)
        {
            if (max < A[j][i])
            {
                max = A[j][i];
            }
        }
        printf("%d ", max);
    }
}
void sorting(int A[3][3])
{
    int temp;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k = j + 1; k < 3; k++)
            {
                if (A[i][j] > A[i][k])
                {
                    temp = A[i][j];
                    A[i][j] = A[i][k];
                    A[i][k] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k = i + 1; k < 3; k++)
            {
                if (A[i][j] > A[k][j])
                {
                    temp = A[i][j];
                    A[i][j] = A[k][j];
                    A[k][j] = temp;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    printf("Enter the number\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // rowLargest(a);
    // colLargest(a);
    sorting(a);
    return 0;
}