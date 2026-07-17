#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
           brr[j]= arr[i];
           j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            brr[j]=arr[i];
            j++;        }
    }
    for(i=0;i<n;i++)
    {
        cout << brr[i]<<" ";
    }
}