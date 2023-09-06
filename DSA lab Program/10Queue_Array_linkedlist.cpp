#include <iostream>
using namespace std;
void enqueue();
void dequeue();
void frontpeek();
void rearpeek();
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *temp = NULL;

int main()
{
    int ch;
    char c = 'y';
    while (c == 'y')
    {
        cout << "\n\t**Queue Operation**";
        cout << "\n1.Insertion\n2.Deletion\n3.Display\n4.first value\n5.Last value";
        cout << "\nEnter your choice = ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            frontpeek();
            break;
        case 5:
            rearpeek();
            break;
        default:
            cout << "\nInvalid choice.";
        }
        cout << "\n Do you want to perform any operation?(y\n)";
        cin >> c;
    }
    return 0;
}
void enqueue()
{
    int item;
    struct node *nn;
    nn = new node;
    cout << "\n Enter the Value:\t";
    cin >> item;
    nn->link = NULL;
    nn->data = item;
    if (front == NULL && rear == NULL)
    {
        front = rear = nn;
    }
    else
    {
        rear->link = nn;
        rear = nn;
    }
}
void frontpeek()
{
    temp = front;
    if (front == NULL && rear == NULL)
    {
        cout << "\nQueue is Empty.";
    }
    else
    {
        cout << "\nFirst value=" << temp->data;
    }
}
void rearpeek()
{
    temp = rear;
    if (front == NULL && rear == NULL)
    {
        cout << "\nQueue is Empty.";
    }
    else
    {
        cout << "\n Last value = " << temp->data;
    }
}
void display()
{
    temp = front;
    if (front == NULL && rear == NULL)
    {
        cout << "\nQueue is Empty.";
    }
    else
    {
        cout << "\nValue are ";
        while (temp != NULL)
        {
            cout << " " << temp->data;
            temp = temp->link;
        }
    }
}
void dequeue()
{
    temp = front;
    if (front == NULL && rear == NULL)
    {
        cout << "\nQueue is Empty.";
    }
    else
    {
        if (temp->link != NULL)
        {
            cout << "\nDeleted Value = " << temp->data;
            temp = temp->link;
            delete front;
            front = temp;
        }
        else
        {
            cout << "\nDeleted Value = " << temp->data;
            delete front;
            front = NULL;
            rear = NULL;
        }
    }
}