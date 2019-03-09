/* 1.	Crear un pointer para saber que hay en front y rear
2.	Colocar estos valores en -1 al inicializar
3.	Incrementar en 1 el valor de “rear” cuando agregamos un elemento
4.	Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front a usar dequeue.
5.	Antes de agregar un elemento revisar si hay espacios
6.	Antes de remover un elemento revisamos que existan elementos
7.	Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1
     y agregar el valor de 0 a Front al hacer nuestro primer enqueue
 */

#include <stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;
//values = (int*) malloc(sizeof(int) * SIZE);

void enQueue(int value) {
    if((rear + 1) == front)
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
        
        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % SIZE;     
    }
}

int main(int argc, char const *argv[])
{
    // deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    // printf("front = %d, rear = %d", front, rear);
    // for(int i = 0; i < SIZE; i++) {
    //     printf("Value[%d] = %d\n", i, values[i]);
    // }
    deQueue();
    // deQueue();
    // printf("front = %d, rear = %d", front, rear);

    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    enQueue(8);
    enQueue(6);
    // deQueue();
    // printf("front = %d, rear = %d", front, rear);
    enQueue(7);
    enQueue(9);
    enQueue(20);
    // enQueue(6);
    // printf("front = %d, rear = %d", front, rear);
     for(int i = 0; i < SIZE; i++) {
        printf("Value[%d] = %d\n", i, values[i]);
    }
    
    return 0;
}
