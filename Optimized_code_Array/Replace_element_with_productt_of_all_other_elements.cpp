#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int prod = 1;
    for(i=0;i<n;i++)
    {
        prod*=arr[i];

    }
    for(i=0;i<n;i++)
    {
        arr[i] = prod/arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}