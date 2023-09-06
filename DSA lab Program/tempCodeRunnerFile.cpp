//Postfix Evaluation Expression
#include<iostream>
#include<String.h>
#include<bits/stdc++.h>
using namespace std;
void push(int);
void pop();
int top=-1;
int s[10];
int main(){
    string exp;
    int ch;
    cout<<"\n Enter the postfix Expression:";
    cin>>exp;
    for(int i=0;i<exp.length();i++){
        ch=int(exp[i]-'0');
        if(isdigit(exp[i])){
            push(ch);
        } else{
            int op2=s[top];
            pop();
            int op1=s[top];
            pop();
            if(exp[i]=='+'){
                push(op1+op2);
            } else if(exp[i]=='-'){
                push(op1-op2);
            } else if(exp[i]=='*'){
                push(op1*op2);
            } else if(exp[i]=='/'){
                push(op1/op2);
            }
        }
    }
    cout<<"\n Result="<<s[top];
    return 0;
}
void push(int a){
    top=top+1;
    s[top]=a;
}
void pop(){
    top=top-1;
}