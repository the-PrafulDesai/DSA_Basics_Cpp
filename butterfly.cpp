#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cin>>n;
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}