#include <iostream>
using namespace std;
struct Node{
    int info;
    Node *link;
};
Node *HEAD=NULL;
void insert (int val){
    Node *n;
    n=new Node;
    n->info=val;
    if (HEAD==NULL){
        n->link=HEAD;
        HEAD=n;
    }
    else{
        Node *temp;
        temp=HEAD;
        while (temp->link!=NULL){
            temp=temp->link;}
        temp->link=n;
    }
}
void display()
{
    Node *temp1;
    temp1=HEAD;
    cout<<"\nValues are ";
    while(temp1!=NULL){
        cout<<" "<<temp1->info;
        temp1=temp1->link;
    }
}
int main()
{
    insert (10);
    insert (12);
    insert (14);
    display();
    return 0;
}
