#include<iostream>
using namespace std;

void quicksort(s,n){
    int top=0;
    if(n>=2){
        top+=1;
        int lower[1]=1,upper[1]=n;
    }
    while(top!=0){
        int beg=lower[top],end=upper[top];
        top=top-1;
        int loc=call partition(s,n,beg,end)
        if(beg<=loc-2){
            top=top+1;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if((loc+2) <=end){
            top=top+1;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
}
void partition(s,n,beg,end){
    int left=beg,right=end,loc=beg;
    while((s[loc]<=s[right]) && loc!=right ){
        right=right-1;
    }
    if(loc==right){
        return loc
    }
    if(s[low]>s[right]){
        temp=s[low];
        s[low]=s[right];
        s[right]=temp;
        loc=right;
    }
    while((s[low]>=s[left]) && loc!=left){
        left=left+1;
    }
    if(loc==left){
        return loc;
    }
    if((s[low]<s[left])){
        temp=s[low];
        s[low]=s[left];
        s[left]=temp;
        loc=left;

    }
}
int main(){
    int s[]={3,2,5,1,8,9,7};
    int n=sizeof(s)/sizeof(s[0]);
    quicksort(s,0,n-1);
    cout<<"Sorted Array is "<<printArray(s,n);
    return 0;
}