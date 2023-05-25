#include<iostream>
using namespace std;
int main()
{
   int i;

for(int j=1; j<=100;j++)
{
   for(i=2; i<=j; i++)
   {
    if(j%i==0)
    {
        break;
    }
   } 
   if(j==i)
   {
    cout<<j<<",";
   }
}
   return 0;
}