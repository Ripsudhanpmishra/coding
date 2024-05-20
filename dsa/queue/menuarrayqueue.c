#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
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
        printf("Enqueue Successful!");
    }
    
}

void dequeue(struct queue * q){
    if(isempty(q))
        printf("Queue is empty.");
    else{
        // q->arr[q->f+1]=NULL;
        q->f = q->f+1; 
        q->size = q->size + 1;
        printf("Dequeue Successful!"); 
    }   
}

void queuecount(struct queue * q){
    int count;
    count = (q->size + q->r - q->f + 1)%q->size;
    printf("Number of elements in queue: %d",count);
}

void display(struct queue * q){
    printf("Elements in the Queue\n");
    for(int i=q->f+1; i<=q->r; i++){
        printf("%d\t",q->arr[i]);
    }
}

int main(){
    struct queue * q;
    q->size = 100;
    q->r = -1;
    q->f = -1;
    int choice;
    int val;

    do{
        printf("\nMENU\n");
        printf("1.ENQUEUE \n");
        printf("2.DEQUEUE \n");
        printf("3.queueFRONT \n");
        printf("4.queueREAR \n");
        printf("5.queueCOUNT\n");
        printf("6.DISPLAY QUEUE\n");
        printf("7.EXIT");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter value to enqueue : ");
                    scanf("%d",&val);
                    enqueue(q, val);
                    break;

            case 2: dequeue(q);
                    break;

            case 3: printf("Fornt of queue: ");
                    printf("%d",q->arr[q->f+1]);
                    break;

            case 4: printf("Rear of queue: ");
                    printf("%d",q->arr[q->r]);
                    break;

            case 5: queuecount(q);
                    break;

            case 6: display(q);
                    break;

            case 7: printf("Exiting...");
                    break;
            
            default: printf("Invalid choice.");
                      break;  

        }    

    } while (choice != 6);

    return 0;
}
