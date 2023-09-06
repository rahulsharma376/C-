//Program to Triverse 1 Dimensional Array

#include<stdio.h>
#include<conio.h>
int main(){
    int i, size;
    printf("Enter the size:\n");
    scanf("%d",&size);
    int arr[size],n;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element you want to search:\n");
    scanf("%d",&n);
    for(i=0;i<size;i++){
        if(n==arr[i]){
            printf("Item found at %d",i+1);
        }
    }
}