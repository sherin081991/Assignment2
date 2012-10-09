
/* Program to sort numbers using Insertion Sort
Input : Number of elements, Elements in the array
Output: Print the elements in sorted order
Date  : 07/10/2012 
 */

#include<stdio.h>
void main () {
    int array[20],n,item,i,a,j;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]);
    }
    for(i=1;i<n;i++) {
        item=array[i];
        j=i;
        while(j>0 && array[j-1]>item) {
            array[j]=array[j-1];
            j--;
        }
        array[j]=item;
    }
    printf("The sorted elements are :\n");
    for(i=0;i<n;i++) {
        printf("\n%d",array[i]);
    }
}

