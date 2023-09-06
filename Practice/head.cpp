#include<iostream>
using namespace std;
void enqueue();
struct node{
    int data;
    struct node*link;

};
struct node*head=NULL;

int main(){
    int ch;
    char c='y';
    while(c=='y'){
        int ad;
        cout<<"Enter the value to add in the linked list:"<<endl;
        cin>>ad;
        struct node *newNode;
        newNode=new node;
        newNode->link=NULL;
        newNode->data=ad;
        cout<<"new node:"<<newNode->data;
    }

    
    // int val;
    // cout<<"Enter the value to enter in the linked list:"<<endl;
    // struct node *newNode;
    // newNode=new node;
    // newNode->link=NULL;
    // newNode->data=val;
    // cout<<"new node:"<<newNode->data;
    // return 0;
}