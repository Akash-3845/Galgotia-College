#include <stdio.h>
#include <conio.h>
void swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}
int part(int arr[], int low, int high)
{
    int pi = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pi && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pi && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = part(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    quicksort(arr, 0, 5 - 1);

    printf("the sorted array is:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}