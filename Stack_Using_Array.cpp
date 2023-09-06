// Program to implement Stack Operation Using Array.
#include <iostream>
using namespace std;
void push(int);
void display();
int peek();
int pop();
int top = -1, s[15];

main()
{
    int ch, item;
    char c = 'y';
    while (c == 'y')
    {
        cout << "\n\t **Stack Operation**";
        cout << "\n 1.Insertion \n 2.Deletion \n 3.TopMost Value \n 4.Display";
        cout << "\n Enter your Choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            if (top < 15)
            {
                cout << "\n Enter the value:";
                cin >> item;
                push(item);
            }
            else
            {
                cout << "\n Stack is full.";
            }
            break;
        case 2:
            if (top == -1)
            {
                cout << "\n Stack is Empty";
            }
            else
            {
                item = pop();
                cout << "\n Deleted Value=" << item;
            }
            break;
        case 3:
            item = peek();
            cout << "\n TopMost Value." << item;
            break;
        case 4:
            display();
            break;

        default:
            cout << "\n Invalid Choice";
            break;
        }
        cout << "\n Do you again want to perform any operation?(y/n):";
        cin >> c;
    }
}
void push(int a)
{
    top = top + 1;
    s[top] = a;
    cout << "\n Value Inserted";
}
void display()
{
    cout << "\n Value are \n";
    for (int i = top; i >= 0; i--)
    {
        cout << "\t" << s[i];
    }
}
int pop()
{
    int a;
    a = s[top];
    top = top - 1;
    return a;
}
int peek()
{
    int a;
    a = s[top];
    return a;
}