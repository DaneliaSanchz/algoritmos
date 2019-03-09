#include <stdio.h>
#define SIZE 300

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void selectionSort(int array[], int n) 
{
    int index, maximum;
    for(int i = 0; i < n; i++) 
    {
        index = i;
        maximum = array[i];
        for(int j = index + 1; j < n; j++)
        {
            if(array[j] > maximum) {
                index = j;
                maximum = array[j];
            }
        }
        swap(&array[index], &array[i]);
    }
}

void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() 
{
    FILE *archivo;
    int arr[SIZE];
    archivo = fopen("numbers.dat", "rb");

    if(archivo != NULL)
    {
        for(int i = 0; i < SIZE; i++)
            fscanf(archivo, "%d", &arr[i]);
    
        fclose(archivo);

        selectionSort(arr, SIZE);
        print_array(arr, SIZE);
    } 
    else
        printf("No se leyo el archivo");
    
    return 0;
}