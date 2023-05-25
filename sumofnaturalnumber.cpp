#include<iostream>
using namespace std;

int natural(int num)
{
   int k=0;
   for(int i=1;i<=num;i++)
   {
      k+=i;
   }
   return k;
}

int main()
{
   int n;
   cin>>n;
   cout<<natural(n);
}