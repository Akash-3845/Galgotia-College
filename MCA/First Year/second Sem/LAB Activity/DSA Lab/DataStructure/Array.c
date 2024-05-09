#include <stdio.h>
int main()
{
    int n;
    // get the size of array
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];
    // get element of array
    printf("Enter the Element of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Print the array
    printf("Array's Element is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}