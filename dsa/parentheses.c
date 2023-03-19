#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

typedef struct stack{
    int top;
    char items[SIZE];
}stack;

void push(stack *s, char item){
    if(s->top == SIZE -1){
        printf("Stack Overflow");
        exit(1);
    }
    else{
        s->top++;
        s->items[s->top] = item;
    }
}

char pop(stack *s){
    if(s->top == -1){
        printf("Stack Underflow");
        exit(1);
    }
    else{
        char item = s->items[s->top];
        s->top--;
        return item;
    }
}

int match(char char1, char char2) {
    if (char1 == '(' && char2 == ')')
        return 1;
    else if (char1 == '{' && char2 == '}')
        return 1;
    else if (char1 == '[' && char2 == ']')
        return 1;
    else
        return 0;
}

int check(char* exp){
    int i;
    stack s;
    s.top = -1;

    for(i=0; i<strlen(exp); i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(&s, exp[i]);
        } 
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(s.top == -1){
                return 0;
            }
            else if(!match(pop(&s), exp[i])){
                return 0;
            }
        }
    }
    if(s.top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char exp[SIZE];
    printf("Enter an expression: ");
    scanf("%s", exp);
    
    if(check(exp)){
        printf("the parentheses are complete\n");
    }
    else{
        printf("the parentheses aren't complete\n");
    }
}