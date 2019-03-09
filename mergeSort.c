#include <stdio.h>

void merge(int array [], int first, int middle, int last)
{
    int arrayFirst [middle + 1];
    int arraySecond [middle + 1];

    int k = first;
    for (int i = 0; k <= middle; i++, k++) {
        arrayFirst[i] = array[k];
    }
    for (int j = 0; k <= last; j++, k++) {
        arraySecond[j] = array[k];
    }

    k = first;
    int i = 0, j = 0;    
    
    while(i < middle - first + 1 && j < last - middle) 
    {
        if (arrayFirst[i] < arraySecond[j]) 
        {
            array[k] = arrayFirst[i++];
        } 
        else
        {
            array[k] = arraySecond[j++];
        }
        k++;
    }
    
    while(i < middle - first + 1) 
    {
        array[k++] = arrayFirst[i++];
    }
    while(j < last - middle) 
    {
        array[k++] = arraySecond[j++];
    }
}

void mergeSort(int array[], int first, int last) 
{
    if(first < last)
    {
        int middle = (int)((first + last) / 2);
        mergeSort(array, first, middle);
        mergeSort(array, middle + 1 , last);
        merge(array, first, middle, last);
    }
}

void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d, ", array[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // int arr[] = {5, 3, 12, -1, 22, 100, 78};
    // int arr []= {14, 7, 3, 12, 9, 11, 6, 2};
    // int arr[] = {3, 7, 12, 14, 2, 6, 9, 11};
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int size = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, size - 1);
    print_array(arr, size);
    return 0;
}
