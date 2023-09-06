//Program to delete an element from a given whose value or position is given.
#include<iostream>
using namespace std;
int main(){
    int arr[15],n,posval,pos,val;
    cout<<"\n Enter the size(must be less than 16):"<<endl;
    cin>>n;
    if(n>15 || n<=0){
        cout<<"]n Size is invalid.";
    } else{
        cout<<"\nEnter the Elements:\t";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"\nDo you want to Enter the Position or value for deleting an element:\n\t1.Position\n\t2.Value\n";
        cin>>posval;
        if(posval==1){
            cout<<"\nEnter the Position:\t";
            cin>>pos;
            if(pos>n || n<=0){
                cout<<"\nWrong Position Entered.\n";
            } else{
                --pos;
                for(int i=pos;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
            }
        } else if(posval==2){
            cout<<"\nEnter the value:  ";
            cin>>val;
            for(int i=0;i<n;i++){
                if(val==arr[i]){
                    for(int j=i;j<n-1;j++){
                        arr[j]=arr[j+1];
                    }
                }
            }
        } else{
            cout<<"\nWrong Parameter Entered.";
        }
        cout<<"\nAfter Deletion Array:\n\t";
        for(int i=0;i<n-1;i++){
            cout<<"\t"<<arr[i];
        }
    }
    return 0;
}