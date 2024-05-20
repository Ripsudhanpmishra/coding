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

struct node* addpolynomial(struct node* head1, struct node* head2){
    struct node* result = NULL;
    struct node* p1 = head1;
    struct node* p2 = head2;
    while(p1!=NULL && p2!=NULL){
        if(p1->exp > p2->exp){
            result = insertnode(result, p1->coeff, p1->exp);
            p1=p1->next;
        }
        if(p1->exp < p2->exp){
            result = insertnode(result, p2->coeff, p2->exp);
            p2=p2->next;
        }
        if(p1->exp = p2->exp){
            result = insertnode(result, p2->coeff+p1->coeff, p2->exp);
            p1=p1->next;
            p2=p2->next;
        }
    }
    while(p1!=NULL){
        result = insertnode(result, p1->coeff, p1->exp);
        p1=p1->next;
    }
    while(p2!=NULL){
        result = insertnode(result, p2->coeff, p2->exp);
        p2=p2->next;
    }
    return result;
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
    struct node* head1 = NULL;
    struct node* head2 = NULL;
    struct node* result = NULL;
    int n, m;
    int coef, pow;
    printf("Enter number of terms in 1st polynomial: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter coefficient of %d term: ",i);
        scanf("%d",&coef);
        printf("Enter exponent of %d term: ",i);
        scanf("%d",&pow);
        head1 = insertnode(head1, coef, pow);
    }

    printf("Enter number of terms in 2nd polynomial: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("Enter coefficient of %d term: ",i);
        scanf("%d",&coef);
        printf("Enter exponent of %d term: ",i);
        scanf("%d",&pow);
        head2 = insertnode(head2, coef, pow);
    }

    printf("1st Polynomial:\n");
    displaylist(head1);
    printf("\n2nd Polynomial:\n");
    displaylist(head2);

    result = addpolynomial(head1, head2);
    printf("\nPolynomial after addition:\n");
    displaylist(result);
    
    return 0;
}