#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int maxno=INT_MIN;
    int minno=INT_MAX;
    cin>>n;

    int array[n];
    //initializing array elements
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<n; i++)
    {
        // if(array[i]>max){
        //     max=array[i];
        // }
        // if(array[i]<min){
        //     min=array[i];
        // }
        maxno=max(maxno,array[i]);
        minno=min(minno, array[i]);
    }

    cout<<"Max:"<<maxno;
    cout<<"Min:"<<minno;

return 0;
}