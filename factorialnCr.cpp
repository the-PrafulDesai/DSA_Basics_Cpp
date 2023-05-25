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
    int r=2;
    cout<< factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}