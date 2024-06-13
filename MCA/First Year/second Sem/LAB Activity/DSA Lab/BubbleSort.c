#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[] = {5, 4, 3, 2, 1};

    int temp = 0;
    bool flag;
    for (int i = 0; i < 5 - 1; i++)
    {
        flag = false;
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}