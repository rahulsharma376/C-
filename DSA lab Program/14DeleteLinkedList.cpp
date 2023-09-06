#include <iostream>
using namespace std;
struct node
{
    int info;
    node *link;
};
node *head=NULL,*temp,*prev;
void ins()
{
    int item;
    cout<<"Enter the value to be inserted:";
    cin>>item;
    node *newnode;
    newnode=new node;
    newnode->info=item;
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    cout<<"Value Inserted"<<endl;
}
void beg()
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }
    else
    {
        temp=head;
        cout<<"Deleted value is "<<temp->info<<endl;
        head=temp->link;
        delete temp;
    }
}
void endd()
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }
    else
    {
        temp=head;
        while(temp->link!=NULL)
        {
             prev=temp;
             temp=temp->link;
        }
        cout<<"Deleted value is "<<temp->info<<endl;
        prev->link=NULL;
        delete temp;
    }
}
void spec()
{
    int item;
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }
    else
    {
        cout<<"Enter the value to be deleted:";
        cin>>item;
        temp=head;
        while(temp->info!=item)
        {
            prev=temp;
            temp=temp->link;
        }
        prev->link=temp->link;
        delete temp;
    }
}
void display()
{
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->info<<" ";
            temp=temp->link;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    char ch;
    ins();
    ins();
    ins();
    ins();
    ins();
    ins();
    ins();
    cout<<"List is ";
    display();
    cout<<endl;
    do
    {
        cout<<"-------------DELELTION OPERATION-------------"<<endl;
        cout<<"1. From beginning"<<endl;
        cout<<"2. From end"<<endl;
        cout<<"3. After specified position"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"Enter your choice:";
        cin>>n;
        switch(n)
        {
        case 1:
            beg();
            break;
        case 2:
            endd();
            break;
        case 3:
            spec();
            break;
        case 4:
            display();
            break;
        default:
            cout<<"Invalid Option"<<endl;
        }
        cout<<"Do you want to continue(Y/N):";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    return 0;
}
