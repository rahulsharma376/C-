#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int size1=mid-low+1;
    int size2=high-mid;
    int left[size1],right[size2];
    
    for(int i=0;i<size1;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<size2;j++){
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<size1 && j<size2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        } else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<size1){
            arr[k]=left[i];
            i++,k++;
    }
    while(j<size2){
                arr[k]=right[j];
            j++,k++;
    }
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
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
    mergesort(arr,0,size-1);
    cout<<"\nSort using mergesort : \n";
    printArray(arr,size);
    return 0;
}