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
    for(i=0;i<n;i++)
    {
        int r=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            r++;
        }
        brr[i]=r;
    }
    for(i=0;i<n;i++)
    {
        cout << brr[i]<<" ";
    }

}