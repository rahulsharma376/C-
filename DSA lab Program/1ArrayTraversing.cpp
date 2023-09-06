//Program to traverse 1 Dimensional Array.
#include<iostream>
using namespace std;
int main(){
    int a[15],i,n;
    cout<<"Enter the Size(must be less than 16)=\t";
    cin>>n;
    if(n>15 || n<=0){
        cout<<"\n Size is invalid";
    } else{
        cout<<"\n Enter the Elements:\t";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"\n Entered Elements are:\n";
        for(i=0;i<n;i++){
            cout<<"\t"<<a[i];
        }
    }
    return 0;
}