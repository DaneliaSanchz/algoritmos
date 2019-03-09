
#include <stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value) {
    if(((rear + 1) % SIZE) == front)
        printf("Nuestro Queue esta lleno\n");
    else {
        if(front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        values[rear] = value;
        printf("Se inserto el valor %d correctamente\n", value);
    }
}

void deQueue() {
    if(front == -1)
        printf("Nuestro Queue esta vacio\n");
    else {
        printf("Se elimino el valor %d\n", values[front]);
        values[front] = 0; // posición disponible para almacenar otro valor
        if(front == rear)
            front = rear = -1; // la cola esta vacía
        else
            front = (front + 1) % SIZE; // si front es la última posición del arreglo,  entonces front = 0
    }
}

void print_deQueue() {
    for(int i = front, j = 0; j < SIZE; j++) {
        if(values[i] != 0)
            printf("%d -> ", values[i]);
        i = (i + 1) % SIZE;
    }
}

int main(int argc, char const *argv[])
{
    int option, value;
    
    do
    {
        printf("\n\n1.- Enqueue\n");
        printf("2.- Dequeue\n");
        printf("3.- Salir\n");
        printf("Escoge una opcion: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Valor: ");
                scanf("%d", &value);
                enQueue(value);
                print_deQueue();
                break;
            case 2:
                deQueue();
                print_deQueue();
                break;
            case 3:
                printf("Fin del programa.");
                break;
            default:
                printf("Opcion No valida.");;
        }
    } while (option != 3);
    
    return 0;
}
