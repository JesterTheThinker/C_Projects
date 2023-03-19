#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack1[SIZE], stack2[SIZE];
int top1 = -1, top2 = -1;

void push1(int value) {
    if (top1 == SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack1[++top1] = value;
}

int pop1() {
    if (top1 == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack1[top1--];
}

void push2(int value) {
    if (top2 == SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack2[++top2] = value;
}

int pop2() {
    if (top2 == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack2[top2--];
}

void enqueue(int value) {
    push1(value);
}

int dequeue() {
    int value;
    if (top2 == -1) {
        while (top1 != -1) {
            value = pop1();
            push2(value);
        }
    }
    value = pop2();
    return value;
}

int main() {
    int choice, value;
    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                printf("The dequeued value is %d\n", value);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
