#include <stdio.h>
#include <string.h>

char* reverseString(char *str, int n)
{
    if(n == 0)
        return '\0';
    // return reverseString();
}

int main()
{
    char string[] = "Algorithms are love";
    int size = strlen(string);
    int temp;

    // for(int i = 0; i < size / 2; i++)
    // {
    //     temp = cadena[i];
    //     cadena[i] = cadena[size - i - 1];
    //     cadena[size - i - 1] = temp;
    // }
    char *result = reverseString(string, size);

    printf("La cadena invertida es: %s", result);

    return 0;
}
