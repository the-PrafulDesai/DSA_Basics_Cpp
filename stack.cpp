#include<iostream>
using namespace std;
#define MAX 5

int stack[MAX];
int top=-1;
int push(int v);
int pop();
int peek();
int stop();
int display();

int main()
{
    int operation;
    int v;
    do
    {
        cout<<"Enter the Operation to be performed(1-5):\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Peek\n";
        cout<<"4. Display\n";
        cin>>operation;

        switch(operation)
        {
            case 1:
                cout<<"Enter the value to be pushed: ";
                cin>>v;
                push(v);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
            case 5:
                stop();
                break;
            default:
                cout<<"Enter an invalid operation number.!\n";
        }
    }while(operation!=5);
    return 0;
}

int push(int v){
    if(top==MAX-1){
        cout<<"Stack is Overflow.!\n";
    }
    else{
        stack[++top]=v;
    }
}

int pop(){
    if(top==-1){
        cout<<"Stack is UnderFlow.!";
    }
    else{
        cout<<stack[top]<<" element is popped.!\n"<<top--;
    }
}

int peek(){
    cout<<stack[top];
}

int stop(){
    cout<<"Terminating the program.!";
    exit(0);
}

int display()
{
    cout<<"[ ";
    for(int i=0; i<top; i++)
    {
        cout<<stack[top]<<",";
    }
    cout<<"]";
    return 0;
}
