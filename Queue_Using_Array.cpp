#include <iostream>
using namespace std;

void enqueue(int);
int dequeue();
void display();
int isEmpty();
void frontpeek();
void rearpeek();
int q[10], front = -1, rear = -1;
int main()
{
    int ch, item, flag = 0;
    char c = 'y';
    while (c == 'y')
    {
        cout << "\n **Stack Operation**";
        cout << "\n 1.Insertion \n2.Deletion \n3.Display \n4.First value \n5.Last Value";
        cout << "\n Enter your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (rear < 10)
            {
                cout << "\n Enter the value=";
                cin >> item;
                enqueue(item);
            }
            else
            {
                cout << "\n Queue is full.";
            }
            break;
        case 2:
            flag = isEmpty();
            if (flag == 1)
            {
                cout << "\n Queue is Empty";
            }
            else
                cout << "\n Deleted Value=" << item;
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
            cout << "\n Invalid Choice";
        }
        cout<<"\n Do you again want to perform any Operation?(y/n)=";
        cin>>c;
    }
    return 0;
}
int isEmpty(){
    if(front==-1 || front>rear){
        return 1;
    } else{
        return 0;
    }
}
void enqueue(int a){
    if(front==-1 && rear==-1){
        front=rear=0;
    } else{
        rear =rear+1;
    }
    q[rear]=a;
}
int dequeue(){
    int a=q[front];
    front=front+1;
    return a;
}
void display(){
    int a=isEmpty();
    if(a==1){
        cout<<"\n Queue is Empty";
    } else{
        cout<<"\n Values are \n";
        for(int i=front;i<=rear;i++){
            cout<<"\t"<<q[i];
        }
    }
}
void frontpeek(){
    int a=isEmpty();
    if(a==1){
        cout<<"\n Queue is Empty";
    } else{
        cout<<"\n Front Value="<<q[front];
    }
}
void rearpeek(){
    int a=isEmpty();
    if(a==1)
    cout<<"\n Queue is Empty";
    else
    cout<<"\n Last value"<<q[rear];
}