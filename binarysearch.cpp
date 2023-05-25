#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int mid=n/2;
    if(arr[mid]>key)
    {
        for(int i=0; i<mid;i++)
        {
            if(arr[i]==key)
                return i;
        }
    }
    else{
        for(int i=mid; i<n; i++)
        {
            if(arr[i]==key)
                return i;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    
    return 0;
}