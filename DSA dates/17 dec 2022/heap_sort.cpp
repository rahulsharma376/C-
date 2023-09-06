#include <iostream>
using namespace std;
void heapify(int a[],int n,int i)
{
 int largest=i,left=2*i+1,right=2*i+2;
 if(left<n && a[left]>a[largest])
 {
 largest=left;
 }
 if(right<n && a[right]>a[largest])
 {
 largest=right;
 }
 if(largest!=i)
 {
 swap(a[i],a[largest]);
 heapify(a,n,largest);
 }
}
void heap_sort(int a[],int n)
{
 for(int i=(n/2-1);i>=0;i--)
 {
 heapify(a,n,i);
 }
 for(int i=n-1;i>=0;i--)
 {
 swap(a[0],a[i]);
 heapify(a,i,0);
 }
}
int main()
{
 int size,n,i;
 cout<<"Enter the size of an array:";
 cin>>size;
 int a[size];
 cout<<"Enter the Elements:";
 for(i=0;i<size;i++)
 {
 cin>>a[i];
 }
 heap_sort(a,size);
 cout<<"After using Heap sort :  ";
 for(i=0;i<size;i++)
 {
 cout<<a[i]<<" ";
 }
 cout<<endl;
 return 0;
}