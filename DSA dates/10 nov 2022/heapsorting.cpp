#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int size;
    cout<<"\nEnter the Size of an array:\n";
    int arr[size];
    cout<<"\nEnter the Elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    heapSort(arr,size);
    cout<<"\nSorted array is \n";
    printArray(arr,size);
    return 0;
}