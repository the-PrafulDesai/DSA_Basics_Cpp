#include<iostream>
using namespace std;
int main()
{
   int n, i;
   cin>>n;

   for(i=2; i <n; i++)
   {
    if(n%i==0)
    {
        cout<<"Not a Prime";
        break;
    }
   } 
   if(n==i)
   {
    cout<<"Prime Number";
   }
   return 0;
}