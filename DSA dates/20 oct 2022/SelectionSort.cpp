#include<iostream>
using namespace std;
int main(){
    int i,j,size,temp,loc;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        loc=i;
        for(j=i+1;j<=size;j++){
            if(arr[j]<arr[loc]){
                loc=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }

    cout<<"Sort using Selection sort are:\n\t";
    for(i=0;i<size;i++){
        cout<<"\t"<<arr[i];
    }    
}
