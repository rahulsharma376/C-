//Program to find the location of a given element using Binary Search.
#include<iostream>
using namespace std;
int main(){
    int arr[20],size,start,end,mid,targ,count=0;
    cout<<"\nEnter the Size: ";
    cin>>size;
    cout<<"\nEnter the Elements(in ascending order): ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Elements are not arranged in ascending ordered.";
            count++;
            break;
        }
    }
    if(count==0){
        start=0;
        end=size-1;
        cout<<"\nDefine a value need to be search from sorted array:"<<endl;
        cin>>targ;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==targ){
                cout<<"\nElement is found at index "<<(mid+1);
                break;
            } else if(targ>arr[mid]){
                start=mid+1;
            } else if(targ<arr[mid]){
                end=mid-1;
            }
        }
        if(start>end){
            cout<<"\nElement not found.";
        }
    }
    return 0;
}