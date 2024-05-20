#include<stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* creatnode(int value){
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inordertraversal(struct node* root){
     if(root!=NULL){
        inordertraversal(root->left);
        printf("%d ",root->data);
        inordertraversal(root->right);
    }

}

int isBST(struct node* root){
    if (root!=NULL){
        static struct node* prev;
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data)
            return 0;
        prev = root;
        return isBST(root->right);    
    }
    
    else return 1;
}

struct node* searchiter(struct node* root, int key){

    while (root!=NULL){
        if(root->data == key)
            return root;
        if(root->data < key)
            root = root->right;
        if(root->data > key)
            root = root->left;        
    }

    return NULL;
}

int main(){
    int x;
    struct node* root = creatnode(10);
    struct node* P1 = creatnode(7);
    struct node* P2 = creatnode(12);
    struct node* P3 = creatnode(3);
    struct node* P4 = creatnode(9);
    root->left = P1;
    root->right = P2;
    P1->left = P3;
    P1->right = P4;

    // printf("\nPreorder Traversal: \n");     
    // preordertraversal(root);

    // printf("\nPostorder Travarsal:\n");
    // postordertraversal(root);

    printf("\nInorder Traversal:\n");
    inordertraversal(root);

    printf("\n%d",isBST(root));

    printf("\nEnter the element to search : ");
    scanf("%d",&x);

    struct node* n =searchiter(root, x);
    
    if(n!=NULL)
        printf("Found : %d",n->data);
    else 
        printf("Element not found!"); 

    return 0;
}