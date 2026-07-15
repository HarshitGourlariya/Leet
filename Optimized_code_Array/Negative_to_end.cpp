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
    int ind =0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>0)
        {
            brr[ind] = arr[j];
            ind++;
        }
    }
    for(i=0;i<n;i++)
    {    
        if(arr[i]<0)
        {
            brr[ind] = arr[i];
            ind++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout << brr[i]<<" ";
    }
}