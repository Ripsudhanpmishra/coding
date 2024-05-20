#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    int *next;

};

int isempty(struct node * top){
    return top == NULL;
}

int isfull(struct node * top){
    struct node * p = (struct node*)malloc(sizeof(struct node));
    return p == NULL;
}

struct node* push(struct node * top, int value){
    
    if (isfull(top)){
        printf("Stack Overflow.");
        // return 0;
    } 
    else{
        struct node * n = (struct node*)malloc(sizeof(struct node));
        n->data = value;
        n->next = top;
        top = n;
        return top;
    }    

}

struct node* pop(struct node * top){
    if(isempty(top)){
        printf("Stack Underflow");
        // return 0;
    }
    else{
        printf("Popped Data: ");
        printf("%d",top->data);
        struct node* temp = top;
        top = top->next;
        free(temp);
        return top;
    }
}

void display(struct node * top){
    struct node* ptr = top;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

int main(){
    struct node * top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    top = push(top, 6);

    top = pop(top);
    printf("\nElement in the stack:\n");
    display(top);
    return 0;
}