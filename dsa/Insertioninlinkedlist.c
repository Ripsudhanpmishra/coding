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

struct node* insertatfirst(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node* insertatindex(struct node* head, int data, int index){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i=0;
    while (i!=index-1){
         p = p->next;
         i++;
    }
    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;
    return head;


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
    head = insertatfirst(head, 0);
    travarsal(head);
    printf("\n");
    insertatindex(head, 1, 1);
    travarsal(head);
    // insert at end ko khud hi banana hai ye ek task hai ...
    

    return 0;
}