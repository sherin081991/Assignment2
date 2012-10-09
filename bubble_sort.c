
/* Program to sort elements using Bubble Sort
   Input : Number of elements and the elements in the array
   Output: Print the elements in sorted order 
   Date  : 05/10/2012 
*/
#include<stdio.h>

void main() {

    int array[25],limit,i,j,temp;

    printf("Enter the limit :\n");
    scanf("%d",&limit);

    printf("Enter the elements :\n");
    for(i=0;i<limit;i++) {
        scanf("%d",&array[i]);
    }
for(i=0;i<limit-1;i++) {
    for(j=i+1;j<limit;j++){
        if(array[i]>array[j]) {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}

printf("The sorted array is :\n");
for(i=0;i<limit;i++) {
    printf("\n%d",array[i]);
}
}
        


