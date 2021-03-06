/* implementation of a queue using an array */

#include <stdio.h>
#define CAPACITY 5

void addElement();
void deleteElement();
void displayElements();
void peek();

int queue[CAPACITY];
int front = -1;
int rear = -1;

void main() {
    addElement(5);
    deleteElement();
    addElement(67);
    displayElements();
    peek();
}

void addElement(int value) {
    if(rear == (CAPACITY - 1))
    {
        printf("The queue is full.\n");
    } else if(rear == -1 && front == -1) {
        rear = front = 0;
        queue[rear] = value;
        printf("Element added!\n");
    } else {
        rear++;
        queue[rear] = value;
        printf("Element added!\n");
    }
}

void deleteElement() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty.\n");
    } else if(front == rear) {
        printf("Element '%d' has been deleted.\n", queue[front]);
        front = rear = -1;
        printf("The queue is now empty.\n");
    } else {
        printf("Element '%d' has been deleted.\n", queue[front]);
        front++;
    }
}

void displayElements() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty.\n");
    } else {
        int i = front;
        while(i < (rear + 1)) {
            printf("%d\n", queue[i]);
            i++;
        }
    }
}

void peek() {
    if(front == -1 && rear == -1) {
        printf("The queue is empty.\n");
    } else {
        printf("The first element of the queue is '%d'.\n", queue[front]);
    }
}