#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j;
    cin >> n ;
    int arr[n];
    int temp[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(j=0;j<n;j++)
    {
        temp[j]=arr[j+1];
    }
    temp[n-1] = arr[0];

    for(i=0;i<n;i++)
    {
        cout << temp[i];
    }



}