//Program to traverse 1 Dimensional Array

#include<stdio.h>
#include<conio.h>
void main(){
    int a[15],i,n;
    printf("Enter the size(should be less than 15 or equal to 15)=");
    scanf("%d",&n);
    if(n>15 || n<=0){
        printf("\nSize is Invalid.");
    } else{
        printf("\nEnter the Elements:");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("\nEntered Elements are:\n");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    }
    getch();
}