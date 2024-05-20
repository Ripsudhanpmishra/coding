#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack * s){
   return s->top==s->size-1;    
}

int isempty(struct stack * s){
    return s->top == -1;
}

void push(int value, struct stack * s){
    if(isfull(s)){
        printf("Stack Overflow.");
    }
    else{
        s->top++;
        s->arr[s->top]=value;
    }
}

int pop(struct stack * s){
    if(isempty(s)){
        printf("Stack Underflow.");
        return -1;
    }
    else{
        int value = s->arr[s->top];
        int *temp = &s->top;
        s->top--;
        free(temp);
        return value;
    }
}

void display(struct stack * s){
    for (int i=s->top; i>=0; i--){
        printf("\n%d",s->arr[i]);
    }
}

void peak(struct stack * s){
    if(isempty(s)){
        printf("Stack is empty.");
    }
    else{
        printf("\nTop element is %d.",s->arr[s->top]);
    }
}

int main(){
    struct stack * s;
    s->size = MAX_SIZE;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    int val;
    while(val!=-1){
        printf("Enter %d element in the stack:\n");
        scanf("%d",&val);
        push(val,s);
    }
    
    int x = pop(s);
    printf("Popped Value is %d",x);
    display(s);
    peak(s);
    free(s->arr);
}