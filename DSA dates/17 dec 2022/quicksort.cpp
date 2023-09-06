#include<iostream>
using namespace std;
int partition(int arr[],int beg,int end){
    int pivot=arr[end];
    int i=(beg-1);
    for(int j=beg;j<=end-1;j++){
        if(arr[j]<pivot){
            i++;
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    int t=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=t;
    return (i+1);
}
void quick(int arr[],int beg,int end){
    if(beg<end){
        int p = partition(arr,beg,end);
        quick(arr,beg,p-1);
        quick(arr,p+1,end);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of an array:\t";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nBefore using quick sort:\n";
    printArray(arr,size);
    quick(arr,0,size-1);
    cout<<"\nAfter using quick sort:\n";
    printArray(arr,size);
    return 0;
}