#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node* next;
};

struct node* creatlist(struct node* head, int coef, int pow){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->coeff = coef;
    newnode->exp = pow;
    newnode->next = NULL;
    return newnode;
}

struct node* insertnode(struct node* head, int coef, int pow){
    struct node* newnode = creatlist(head, coef, pow);
    if(head == NULL)
        head = newnode;

    else{
        struct node* temp = head;
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }    

    return head;
}

void displaylist(struct node* head){
    struct node* ptr = head;
    while (ptr!=NULL)
    {
        printf("%dx^%d",ptr->coeff,ptr->exp);
        if (ptr->next!=NULL)
            printf(" + ");  

        ptr=ptr->next;
    }
    
}
int main(){
    struct node* head = NULL;
    int n;
    int coef, pow;
    printf("Enter number of terms in polynomial: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter coefficient of %d term: ",i);
        scanf("%d",&coef);
        printf("Enter exponent of %d term: ",i);
        scanf("%d",&pow);
        head = insertnode(head, coef, pow);
    }

    printf("Given Polynomial:\n");
    displaylist(head);
    return 0;
}