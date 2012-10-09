
/* Program to implement various operations in stack.
   Input : 
   Output: 
   Date  : 05/10/2012 
*/
#include<stdio.h>
#define  max_size 10
int stack[max_size];
int top=0;
void main() {
int choice,ch;
    do{
        printf("Enter the choice :\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3:Traverse\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: push();
                   break;
            case 2: pop();
                   break;
            case 3: traverse();
                   break;
            default:printf("You have entred a wrong choice\n");
        }
       printf("Do you wish to continue(1 for yes,2 for no) ?\n");
       scanf("%d",&ch);
    }

    while(ch==1);
}
void push() {
    int item;
    printf("Enter the item to be pushed :\n");
    scanf("%d",&item);
    if(top==max_size){
    printf("The stack is full\n");
    }
    else{
    top=top+1;
    stack[top]=item;
    }
}
int pop () {
    int item;
    if(top==0){
        printf("The stack is empty\n");
    }
 else{
    item=stack[top];
    top=top-1;
    printf("Popped out element is :%d",item);
    
 }
 return(item);
}
void traverse() {
    int i;
    if(top==0){
        printf("Stack is empty\n");
    }
    else{
        printf("Elements in the stack are :\n");
        for(i=top;i>=0;i--){
            printf("%d",stack[i]);
            
        }

    }
}
