// program to convert infix expression into postfix expression using stack

#include <iostream>
using namespace std;
void push(char);
void pop();
char post_fix[20];
int j = 0;
char s[200];
int top = -1;
int main()
{
	char exp[200];
	int i = 0;
	char ch;
	cout << "\nEnter Expression And Terminate it with  = ";
	cin >> exp;
	push('(');
	while (top >= 0)
	{
		ch = exp[i];
		switch (ch)
		{
		case '(':
			push(ch);
			i++;
			break;
		case ')':
			while (s[top] != '(')
			{
				pop();
			}
			pop();
			i++;
			break;
		case '+':
		case '-':
			while (s[top] == '+' || s[top] == '-' || s[top] == '*' || s[top] == '/' || s[top] == '^')
			{
				pop();
			}
			push(ch);
			i++;
			break;
		case '*':
		case '/':
			while (s[top] == '*' || s[top] == '/' || s[top] == '^')
			{
				pop();
			}
			push(ch);
			i++;
			break;
		default:
			post_fix[j] = ch;
			j++;
			i++;
		}
	}
	cout << "\nPostfix expresion = " << post_fix;
	return 0;
}
void push(char val)
{
	top = top + 1;
	s[top] = val;
}
void pop()
{
	if (top == -1)
	{
		cout << "\nStack is empty";
	}
	else
	{
		if (s[top] != '(')
		{
			post_fix[j] = s[top];
			j++;
		}
		top--;
	}
}