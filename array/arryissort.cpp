#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int i,n,j,k;
    cin >> n;
    int arr[n] , brr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(j=0;j<n;j++)
    {
        brr[j]=arr[j];
    }
    sort(arr,arr+n);
   
    for(k=0;k<n;k++)
    {
        if(brr[k]!=arr[k])
        cout << "unsorted";
        break;
    }
}