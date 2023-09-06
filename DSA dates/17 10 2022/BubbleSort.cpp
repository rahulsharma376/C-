#include<iostream>
using namespace std;
int main(){
    int i,j,size,temp;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorting using Bubble Sort are:\n\t";
    for(i=0;i<size;i++){
        cout<<"\t"<<arr[i];
    }
}