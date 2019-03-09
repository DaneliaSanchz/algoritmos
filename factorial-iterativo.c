#include <stdio.h>

int factorial(int n)
{   int i, result;
    result = i = 1;
    while(n >= i)
    {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int num, result;
    printf("Introduce un valor: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("El factorial de %d es %d", num, result);
    return 0;
}