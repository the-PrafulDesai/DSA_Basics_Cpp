#include<iostream>
#include<climits>
using namespace std;

int selectionsort(int n, int arr[])
{
    int minno=INT_MIN;
    for(int i=0; i<n; i++)
    {
        minno=min(arr[i],minno);
    }
    cout<<minno;
    return 0;
}


int main()
{
    int n=0;
    int arr[]={10,20,50,40,30};

    selectionsort(n,arr);
    return 0;
}