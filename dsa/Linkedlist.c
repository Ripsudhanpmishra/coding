#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;
    
};

void travarsal(struct node* ptr){
while (ptr!=NULL){
printf("Element: %d\n", ptr->data);
ptr = ptr->next;
}
}

struct node* reverse(struct node** head){
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* temp = NULL;
    while(current!=NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return *head =  prev;

}

int main(){
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 8;
    fourth->next = NULL;   

    travarsal(head);
    printf("\n");
    reverse(&head);
    printf("\n");
    travarsal(head);
    return 0;
}