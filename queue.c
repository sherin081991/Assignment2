#include<stdio.h>
#define  max_size 10
int q[max_size];
int front=-1,rear=-1;
void main() {
int choice,ch;
    do{
        printf("Enter the choice :\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3:Display\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
                   break;
            case 2: delete();
                   break;
            case 3: display();
                   break;
            default:printf("You have entred a wrong choice\n");
        }
       printf("\nDo you wish to continue(1 for yes,2 for no) ?\n");
       scanf("%d",&ch);
    }

    while(ch==1);
}
void insert() {
    int item;
    printf("Enter the item to be inserted :\n");
    scanf("%d",&item);
    if(rear==(max_size-1)){
    printf("The Queue is full\n");
    }
    else{
    rear=rear+1;
    q[rear]=item;
   
    if(front==-1){
        front++;

    }
    }
}
int delete () {
    int item;
    if(front==-1){
        printf("The queue is empty\n");
    }
 else if(front==rear){
     printf("popped out element is :%d\n",q[front]);
     front=-1;
     rear=-1;
 }
    else{
    item=q[front];
    front=front+1;
    printf("Popped out element is :%d\n",item);
    
 }
 return(item);
}
void display() {
    int i;
    if(front==-1){
        printf("Queue is empty\n");
    }
    else {
        printf("Elements in the queue  are :\n");
        for(i=front;i<=rear;i++){
            printf("%d",q[i]);
            
        }

    }
}
