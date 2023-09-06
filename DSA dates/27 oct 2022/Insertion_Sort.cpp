#include<iostream>
using namespace std;
int main(){
    int i,j,size,target;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<=size-1;i++){
        target=arr[i];
        int j=i-1;
        while(target<=arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=target;
    }

    cout<<"Sort using Insertion sort are:\n\t";
    for(i=0;i<size;i++){
        cout<<"\t"<<arr[i];
    }    
}
