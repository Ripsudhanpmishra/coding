#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size ;
    int f;
    int r;
    int* arr;
};
int isfull(struct queue * q){
    return q->r == q->size - 1;
}

int isempty(struct queue * q){
    return q->f == q->r;
}

void enqueue(struct queue * q, int data){
    if(isfull(q))
        printf("Queue is full.\n");

    else{
        q->r = q->r + 1;
        q->arr[q->r] = data;
    }

}

void dequeue(struct queue * q){
    if(isempty(q))
        printf("Queue is empty.");
    else{
        // q->arr[q->f+1]=NULL;
        q->f = q->f+1; 
        q->size = q->size + 1;
    }    
}

void display(struct queue * q){
    for(int i=q->f+1; i<=q->r; i++){
        printf("%d\t",q->arr[i]);
    }
}

int main(){
    struct queue * q;
    printf("Enter the size of Queue: ");
    scanf("%d",&q->size);
    q->f = -1;
    q->r = -1;
    q->arr =  (int *)malloc(q->size * sizeof(int));
    enqueue(q, 1);
     enqueue(q, 2);
      enqueue(q, 3);
       enqueue(q, 4);
        enqueue(q, 5);
         enqueue(q, 6);
         dequeue(q);
    display(q);


    return 0;
}