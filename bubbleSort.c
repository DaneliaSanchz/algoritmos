/* 1.- Comenzamos a hacer la comparación de elementos adyacentes
2.- repetimos hasta tener una pasada sin ningúb swap */

#include <stdio.h>

void cambiar_pos(int *n1, int *n2) 
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int N) 
{
    for(int i = N - 1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(vector_entrada[j] < vector_entrada[j + 1])
                cambiar_pos(&vector_entrada[j], &vector_entrada[j + 1]);
        }
    }
}

void print_array(int vector_entrada[], int N) 
{
    for(int i = 0; i < N; i++)
        printf("%d ,", vector_entrada[i]);
    printf("\n fin del ordenamiento");
}

int main(int argc, char const *argv[])
{
    int vector_entrada[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vector_entrada) / sizeof(int);
    bubbleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");
    printf("%d", (int)(7 / 2));
    return 0;
}
