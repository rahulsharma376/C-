#include<iostream>
using namespace std;
int main()
{
    int a[15],i,n,val,pos;
    cout<<"\n Enter the Size:";
    cin>>n;
    if(n>15 || n<=0){
        cout<<"\n Size is invalid.";
    } else{
        cout<<"\n Enter the Elements:";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==15){
            cout<<"\n Array is full.";
        } else{
            cout<<"\n Enter the value which you want to insert :";
            cin>>val;
            cout<<"\n Enter the position:";
            cin>>pos;
            if(pos<=0 || pos>(n+1)){
                cout<<"\n Insertion is not possible.";
            } else{
                i=n;
                while(i>=pos){
                    a[i]=a[i-1];
                    i=i-1;
                }
                a[pos-1]=val;
                n=n+1;
                cout<<"\n After Insertion array elements are \n";
                for(i=0;i<n;i++){
                    cout<<"\t"<<a[i];
                }
            }
        }
    }
    return 0;
}