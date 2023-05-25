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
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<< factorial(i)/(factorial(j)*factorial(i-j));
        }
        cout<<endl;
    }
    return 0;
}