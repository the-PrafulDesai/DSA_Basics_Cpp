#include<iostream>
#include<climits>
using namespace std;

int main()
{
    long long int n=5, maxno=INT_MIN, minno=INT_MAX, sum=0, arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }

    cout<<sum-maxno<<" "<<sum-minno;
    return 0;
}