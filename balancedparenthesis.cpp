#include<iostream>
using namespace std;

int stack[100];
int top=-1;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    for(int i=0; i<n; i++){
        if(top==-1)
        {
            stack[++top]=str[i];
        }
        else if((stack[top]=='(' && str[i]==')') || 
        (stack[top]=='[' && str[i]==']') || 
        (stack[top]=='{' && str[i]=='}'))
        {
            stack[top--];
        }
        else
        {
            stack[++top]=str[i];
        }
    }
    if(top==-1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}