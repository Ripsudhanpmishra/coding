#include<stdio.h>
#include<stdlib.h>

struct circularqueue{
    int size ;
    int f;
    int r;
    int* arr;
};
int is_full(struct circularqueue *queue){
    if(queue->r==queue->size-1  && queue->f!=-1){
        return 1;
    }
    else{
        return 0;
    }
}
int is_empty(struct circularqueue *queue){
    if(queue->r==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct circularqueue *queue){
    if(is_full(queue)){
        queue->r=queue->f;
    }
    else{
        queue->r++;
        printf("Enter the value of element :");
        scanf("%d",&queue->r);
    }
}
void dequeue(struct circularqueue *queue){
    if(is_empty(queue)){
        printf("The queue is in underflow");
    }
    else{
        int i;
        for(i=queue->f;i<queue->r;i++){
            queue->arr[i]=queue->arr[i+1];
        }
        printf("DEQUEUED SUCESSFULLY ...");
    }
    return;
}
void display(struct circularqueue *queue){
    int i=queue->f;
    while(queue!=NULL && queue->arr[i]!='\0'){
        printf("Element is :%d\n",queue->arr[i]);
    }
    return;
}
int main(){
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    struct circularqueue *queue=(struct circularqueue*)malloc(sizeof(struct circularqueue));
    queue->arr=(int*)malloc(size*sizeof(int));
    queue->size=size;
    queue->f=-1;
    queue->r=-1;
    printf('Array created ....\n');
    
    return 0;
}
