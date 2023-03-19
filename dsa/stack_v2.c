#include<stdio.h>
#define SIZE 5

int s[SIZE], top=-1;

void push(int s[], int x){
    if(top == SIZE - 1){
        printf("Overflow!!\n");
        return;
    }
    else{
        top++;
        s[top] = x;
        printf("Pushed -> %d\n", x);
    }
}

int pop(int s[]){
    if(top == -1){
        printf("Underflow!!\n");
        return -1;
    }
    int val = s[top];
    top--;
    printf("Popped -> %d\n", val);
    return val;
}

void display(int s[]){
    if (top == -1){
        printf("The stack is empty!!\n");
        return;
    }
    int i;
    for(i=0; i<=top; i++){
        printf("%d ", s[i]);
    }
    printf("\n");
}

int main(){
    pop(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);

    push(s, 6);

    display(s);

    pop(s);
    display(s);

    return 0;
}

