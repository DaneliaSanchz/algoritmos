#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    int temp;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i = i + 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {1992, 1990, 10, 5, 6, 100, 0, 1, -10};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}