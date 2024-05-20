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

void preordertraversal(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preordertraversal(root->left);
        preordertraversal(root->right);
    }

}

void postordertraversal(struct node* root){
    if(root!=NULL){
        postordertraversal(root->left);
        postordertraversal(root->right);
        printf("%d ",root->data);
    }

}

void inordertraversal(struct node* root){
     if(root!=NULL){
        inordertraversal(root->left);
        printf("%d ",root->data);
        inordertraversal(root->right);
    }

}

int main(){
    struct node* root = creatnode(10);
    struct node* P1 = creatnode(7);
    struct node* P2 = creatnode(4);
    struct node* P3 = creatnode(3);
    struct node* P4 = creatnode(1);
    root->left = P1;
    root->right = P2;
    P1->left = P3;
    P1->right = P4;

    printf("\nPreorder Traversal: \n");     
    preordertraversal(root);

    printf("\nPostorder Travarsal:\n");
    postordertraversal(root);

    printf("\nInorder Traversal:\n");
    inordertraversal(root);

    return 0;
}