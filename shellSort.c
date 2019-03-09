#include <stdio.h>
#define N 100

void shellShort(int array[], int n)
{
    int inc = (int)(n / 2);
    int j, temp;
    for(; inc > 0; inc /= 2)
    {
        for(int i = inc; i < n; i++)
        {
            j = i - inc;
            while(j >= 0)
            {
                if(array[j] <= array[j + inc])
                {
                    temp = array[j];
                    array[j] = array[j + inc];
                    array[j + inc] = temp;
                }
                else
                    break;
                j = j - inc;
            }
        }
    }
}

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
}

int main()
{
    // int arr[] = {1992, 1990, 10, 5, 6, 100, 0, 1, -10};
    // int arr[] = {14, 7, 3, 12, 9, 11, 6, 2};
    FILE *archivo;
    int array[N];
    archivo = fopen("datos.dat", "rb");

    if(archivo != NULL)
    {
        for(int i = 0; i < N; i++)
            fscanf(archivo, "%d", &array[i]);
    
        fclose(archivo);

        shellShort(array, N);
        print_array(array, N);
    } 
    else
        printf("No se leyo el archivo");
    
    return 0;
}