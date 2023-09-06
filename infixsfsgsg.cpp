//Program to convert infix expression to postfix expression

#include<iostream>
using namespace std;

char p_exp[20];
int top=-1,j=0;
char s[20];

void push(char ch){
	top=top+1;
	s[top]=ch;
    cout<<"\nTop="<<top;
    cout<<"\nCharacter Inserted:"<<s[top];
}
void pop()
{
    if(top==-1){
        cout<<"\nStack is Empty";
    } else{
        if(s[top]!='('){
            p_exp[j]=s[top];
            j=j+1;
            top=top-1;
        }
    }	
}
int main()  
{  
	char i_exp[20],c;
    int i=0; 
	cout << "\n Enter an infix expression and append it with ";  
	cin >> i_exp;  
 	push('(');
    /*while(top>=0){
        c=i_exp[i];
        switch(c){
            case '+':
            case '-':
            while(s[top]=='+' || s[top]=='-' || s[top]=='*' || s[top]=='/' || s[top]=='^')
            {
                pop();
            }
            push(c);
            i++;
            break;
            case '*':
            case '/':
            while( s[top]=='*' || s[top]=='/' || s[top]=='^')
            {
                pop();
            }
            push(c);
            i++;
            break;
            case '(':
            push(c);
            i++;
            break;
            case ')': while(s[top]!='(')
            {
                pop();
            }
            pop();
            i++;
            break;
            default: p_exp[j]=c;
            j++;
            i++;
        }
    }*/
    cout<<"\nPostfix Expression ="<<p_exp;
    return 0;
}
