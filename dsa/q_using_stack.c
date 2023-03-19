#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// Stack structure
typedef struct {
    int data[SIZE];
    int top;
} Stack;

// Queue structure
typedef struct {
    Stack s1;
    Stack s2;
    int count;
} Queue;

void push(Stack *s, int value) {
    if (s->top == SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->data[(s->top)--];
}

void enqueue(Queue *q, int value) {
    if (q->count == SIZE) {
        printf("Queue overflow\n");
        return;
    }
    push(&(q->s1), value);
    q->count++;
}

int dequeue(Queue *q) {
    if (q->count == 0) {
        printf("Queue underflow\n");
        exit(1);
    }
    while (q->s1.top != -1) {
        push(&(q->s2), pop(&(q->s1)));
    }
    int value = pop(&(q->s2));
    q->count--;
    while (q->s2.top != -1) {
        push(&(q->s1), pop(&(q->s2)));
    }
    return value;
}

void display(Queue *q) {
    if (q->count == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    for (int i = 0; i <=q->s1.top; i++) {
        printf("%d ", q->s1.data[i]);
    }
    printf("\n");
}

int main() {
    Queue q = { .s1.top = -1, .s2.top = -1, .count = 0 };
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);
    display(&q);
    dequeue(&q);
    display(&q);

    return 0;
}


