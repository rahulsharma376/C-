#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*link;
};
Node*top=NULL;
void push(int  value){
    struct Node*newNode;
    newNode=new Node;
    newNode->data=value;
    if(top==NULL){
        newNode->link=NULL;
    } else{
        newNode->link=top;
    }
    top=newNode;
    cout<<"\nNode is inserted.";
}
void display(){
    if(top==NULL){
        cout<<"\nStack Underflow";
    } else{
        cout<<"\nValues are:";
        struct Node *temp=top;
        while(temp->link!=NULL){
            cout<<"\t"<<temp->data;
            temp=temp->link;
        }
        cout<<"\t"<<temp->data;
    }
}
void pop(){
    if(top==NULL){
        cout<<"\nStack Underflow.";
    } else{
        struct Node *temp=top;
        int temp_data=top->data;
        top=top->link;
        delete temp;
        cout<<"\nDeleted Value="<<temp_data;
    }
}
void peek(){
    if(top==NULL){
        cout<<"\nStack Underflow.";
    } else{
        struct Node *temp=top;
        int temp_data=top->data;
        cout<<"\nTopMost Value="<<temp_data;
    }
}
int main(){
    int choice,value;
    char ch='y';
    while(ch=='y'){
        cout<<"\n\t**Stack Operations**";
        cout<<"\n1.Push\n2.Pop\n3.TopMost Value\n4.Display";
        cout<<"\nEnter your Choice:";
        cin>>choice;
        switch(choice){
            case 1: cout<<"\nEnter the value to insert:";
            cin>>value;
            push(value);
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4:display();
            break;
            default:cout<<"\nWrong Choice.";
        }
        cout<<"\nDo you again want to perform operation again(Y/N)?";
        cin>>ch;
    }
    return 0;
}