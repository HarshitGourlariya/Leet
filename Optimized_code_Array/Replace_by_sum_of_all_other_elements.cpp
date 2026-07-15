#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0,total;
    cin >> n;
    int arr[n];
    total = n*(n+1)/2;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<n;j++)
    {
        arr[j]=total - arr[j];
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }

    
}