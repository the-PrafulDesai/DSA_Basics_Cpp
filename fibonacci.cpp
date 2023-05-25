#include<iostream>
using namespace std;

void fibonacci(int n){
    int t1=0;
    int t2=1;
    int nt;

    for(int i= 0;i<=n;i++)
    {
        cout<<t1<<" ";
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}