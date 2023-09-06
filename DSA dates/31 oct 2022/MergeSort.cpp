//Sorting using MergeSort
 
#include<iostream>
using namespace std;
void Merge(int *arr,int beg,int mid,int end){
    int lbindex=beg;
    int rbindex=mid+1;
    int tbindex=beg;
    int temp[end+1];
    while(lbindex<=mid && rbindex<=end){
        if(arr[lbindex]<arr[rbindex]){
            temp[tbindex]=arr[lbindex];
            lbindex=lbindex+1;
        } else{
            temp[tbindex]=arr[rbindex];
            rbindex=rbindex+1;
        }
        tbindex=tbindex+1;
    }
    while(lbindex<=mid){
        
        temp[tbindex]=arr[lbindex];
        lbindex=lbindex+1;
        tbindex=tbindex+1;
    }
    while(rbindex<=end){
        temp[tbindex]=arr[rbindex];
        rbindex=rbindex+1;
        tbindex=tbindex+1;
    }
    for(int i=0;i<=end;i++){
        arr[i]=temp[i];
    }
}
 void MergeSort(int *arr,int low,int high){
    if(low<high){
        int mid=(low+(high-low))/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}
int main(){
    int size;
    cout<<"Enter the size of an array:\n";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int beg=0;
    int end=size-1;
    MergeSort(arr,beg,end);
    cout<<"After Merge Sort";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}