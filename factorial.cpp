#include<iostream>
using namespace std;

int factorial(int num){
    int k=1;
    for(int i=2; i<=num; i++)
    {
        k=k*i;
    }
    return k;
}

int main()
{
    int n=5;
    cout<<n<<"! is "<<factorial(n);
    return 0;
}