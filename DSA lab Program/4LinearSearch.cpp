//Program to find the location of a given element using linear search.
#include<iostream>
using namespace std;
int main(){
    int i,size,n;
    cout<<"\nEnter the Size:\n";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the Elements:\t";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the Element you want to search:\n ";
    cin>>n;
    for(i=0;i<size;i++){
        if(n==arr[i]){
            cout<<"Item found at "<<i+1;
            break;       // Work for only one search.
        }
    }
    if(i==size){
        cout<<"Item not found."<<endl;
    }
    return 0;
}