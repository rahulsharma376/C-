//Program to implement stack operation using Array.
#include<iostream>
using namespace std;
void push(int);
void display();
int peek();
int pop();
int top=-1,s[15];

main(){
    int ch,item;
    char c='y';
    while(c=='y'){
        cout<<"\n\t**Stack Operation**\n";
        cout<<"\n1.Insertion\n2.Deletion\n3.TopMost Value\n4.Display\n";
        cout<<"\nEnter your Choice:";
        cin>>ch;
        switch(ch){
            case 1:if(top<15){
                cout<<"\nEnter the Value:";
                cin>>item;
                push(item);
            } else{
                cout<<"\nStack is full.";
            }
            break;
            case 2:if(top==-1){
                cout<<"\nStack is Empty.";
            } else{
                item=pop();
                cout<<"\nDeleted Value = "<<item;
            }
            break;
            case 3:item==peek();
            cout<<"\nTopMost Value."<<item;
            break;
            case 4:display();
            break;
            default:cout<<"\nInvalid Choice.";
        }
        cout<<"\nDo you again want to perform any Operation?(y/n):";
        cin>>c;
    }
}
void push(int a){
    top=top+1;
    s[top]=a;
    cout<<"\nValue Inserted.";
}
void display(){
    cout<<"\n Value are \t";
    for(int i=top;i>=0;i--){
        cout<<"\t"<<s[i];
    }
}
int pop(){
    int a;
    a=s[top];
    top=top-1;
    return a;
}
int peek(){
    int a;
    a=s[top];
    return a;
}