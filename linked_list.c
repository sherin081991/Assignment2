#include<stdio.h>
#define max 25
int linked_list[max];
int n;
void main () {
    int choice,ch;
    do {
        printf("\n1:Input List");
        printf("\n2:Insert");
        printf("\n3:Delete");
        printf("\n4:Display");
        scanf("%d",&choice);
        switch(choice) {
            case 1:printf("Enter the number of elements to be inserted :\n");
                   scanf("%d",&n);
                   input();
                   break;
            case 2:insert();
                   break;
            case 3:delete();
                   break;
            case 4:display();
                   break;
            default:printf("You have entered a wrong choice\n");
        }
        printf("\n Do you want to continue(1 for yes/2 for no))?");
        scanf("%d",&ch) ;
    }
    while(ch==1);
}
//To input list
void input() {
    int i,item;
    printf("Enter the elements to the list :\n");
    for(i=0;i<n;i++){
        scanf("%d",&linked_list[i]);
    }
}
//To insert elements
void insert() {
    int item,position,temp;
    printf("Enter the element to be inserted\n");
    scanf("%d",&item);
    printf("Enter the position to which it is to be inserted\n");
    scanf("%d",&position);
    //Insertion at the end
    if(position==n+1) {
        linked_list[n]=item;
        n=n+1;
    }
    //Insertion in between
    else {
        temp=n-1;
        while(temp>=(position-1)){
            linked_list[temp+1]=linked_list[temp];
            temp--;
        }
        linked_list[position-1]=item;        n=n+1;
    }
}

void display() {
    int i;
    printf("Elements in the list are :");
    for(i=0;i<n;i++) {
        printf("\n%d",linked_list[i]);
        
    }
}
    //To delete a element
    void delete(){
        int i, element,temp,position;
        printf("Enter the element to be deleted :\n");
        scanf("%d",&element);

        for(i=0;i<n;i++) {

            if(element==linked_list[i]) {
                position=i+1;
                break;
            }
        }
        if(element==linked_list[n-1]) {
           
            n=n-1;
        }
        else {

            temp=position-1;
            while(temp<=n-1) {
                linked_list[temp]=linked_list[temp+1];
                temp++;
            }
            n=n-1;
        }
    }
