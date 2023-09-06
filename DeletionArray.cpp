#include<iostream>
using namespace std;
int main(){
    int size,posval,pos,val;
    char pr;
    cout<<"Enter the Size of an array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Do u want to enter the position or value of an array:\n\t1.Position\n\t2.Value\n";
    cin>>posval;
    if(posval==1){
        cout<<"\nEnter the Position of the array u want to delete:";
        cin>>pos;
        if(pos>size){
            cout<<"Invalid Position."<<endl;
        } else{
            --pos;
            for(int i=pos;i<size-1;i++){
                arr[i]=arr[i+1];
            }
        }
    } else if(posval==2){
        cout<<"\nEnter the value u want to delete:\t";
        cin>>val;
        for(int i=0;i<size;i++){
            if(val=arr[i]){
                for(int j=i;j<size;j++){
                    arr[j]=arr[j+1];
                }
            }
        }
    } else{
        cout<<"Invalid Value Entered.";
    }
    cout<<"\nDo you want to print the array after deletion:\n";
    cin>>pr;
    if(pr=='y'){
        for(int i=0;i<size-1;i++){
            cout<<arr[i]<<"\t";
        }
    } else{
        cout<<"No, ok.";
    }
}