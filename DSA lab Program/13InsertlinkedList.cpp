#include <iostream>
using namespace std;
struct Node{
    int info;
    Node *link;
};
Node *HEAD=NULL;
void insert_beg(int val){
    Node *n;
    n=new Node;
    n->info=val;
    n->link=HEAD;
    HEAD=n;
}
void insert_after(int val,int val1){
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
        while (temp->info!=val1)
            temp=temp->link;
        n->link=temp->link;
        temp->link=n;
    }
}
void insert_end (int val){
    Node *n;
    n=new Node;
    n->info=val;
    n->link=NULL;
    if (HEAD==NULL){
        n->link=HEAD;
        HEAD=n;
    }
    else{
        Node *temp;
        temp=HEAD;
        while (temp->link!=NULL)
            temp=temp->link;
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
    int option,val,val1;
    while(1){
    cout<<"\n\t** LINKED LIST OPERATIONS";
    cout<<"\n1: Insertion IN BEGiNNING";
    cout<<"\n2. Insertion AT END";
    cout<<"\n3. Insertion After Specific Value";
    cout<<"\n4. Display";
    cout<<"\n5. Exit";
    cout<<"\n Enter your choice:";
    cin>>option;
    switch(option){
        case 1: cout<<"\nEnter value=";
                cin>>val;
                insert_beg(val);
                break;
        case 2: cout<<"\nEnter value=";
                cin>>val;
                insert_end(val);
                break; 
        case 3: cout<<"\nEnter value which you want to insert=";
                cin>>val;
                cout<<"\nEnter value afer which you want to insert=";
                cin>>val1;
                insert_after(val,val1);
                break; 
        case 4: display();
                break;
        case 5: return (0);
                break;
        default: cout<<"\nInvalid choice";
    }
    }
    return 0;
}
