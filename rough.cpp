#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a positive number:";
    cin>>n;
    try
    {
        cout<<"Let's check"<<endl;
        if(n<0)
        {
            throw n;
            cout<<"This will never be executed:"<<endl;
        }
        else
        {
            cout<<"Number positive"<<endl;
        }
    }
    catch(int x)
    {
        cout<<"Exception Caught"<<endl;
    }
    return 0;
}
