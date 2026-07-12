#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin >> n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    brr[0] = arr[n-1];
    for(int j=1;j<n;j++)
    {
        brr[j] = arr[j-1];
    }
    
    for(i=0;i<n;i++)
    {
        cout << brr[i];
    }
}