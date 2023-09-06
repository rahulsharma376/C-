#include<iostream>
using namespace std;
void merge_sort(int arr,int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,beg,mid+1);
        merge(arr,beg,mid,end);
    }
}
void merge(int arr,int low,int mid,int high){
    int i=low,j=mid+1,k=low,c[high];
    while(i<=mid & j<=high){
        if(arr[i]<arr[j]){
            c[k]=arr[i];
            i++,k++;
        } else{
            c[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid){
        c[k]=arr[i];
        i++,k++;
    }
    while(j<=high){
        c[k]=arr[j];
        j++,k++;
    }
    for(i=0;i<=high;i++){
        arr[i]=c[i];
    }
}
int main(){
    int size,i;
    cout<<"\nEnter the Size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int beg,end=size-1;
    merge_sort(arr[end],beg,end);
    for(i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}