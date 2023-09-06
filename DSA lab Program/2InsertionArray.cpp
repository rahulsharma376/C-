//Program to insert a new element at end as well as at a given position in an array.
#include<iostream>
using namespace std;
int main(){
    int a[15],i,n,val,pos;
    cout<<"\nEnter the Size:\t";
    cin>>n;
    if(n>15 || n<=0){
        cout<<"\n Size is invalid";
    } else{
        cout<<"\n Enter the Elements:";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==15){
            cout<<"\nArray is full.";
        } else{
            cout<<"\n Enter the value which you want to insert:\t";
            cin>>val;
            cout<<"\n Enter the position:";
            cin>>pos;
            if(pos<=0 || pos>(n+1)){
                cout<<"\n Insertion is not Possible.";
            } else{
                i=n;
                while(i>=pos){
                    a[i]=a[i-1];
                    i-=1;
                }
                a[pos-1]=val;
                n=n+1;
                cout<<"\nAfter Insertion Array Element are \n";
                for(int i=0;i<n;i++){
                    cout<<"\t"<<a[i];
                }
            }
        }
    }
    return 0;
}