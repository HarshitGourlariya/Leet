#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,r,n,sum;
    cin >> n >> k;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);
    l=0;
    r=n-1;
    while(left<right)
    {
        sum = arr[l]+arr[r];
        if(sum>k)
        r--;
        if(sum<k)
        l++;
        if(sum==k)
        break;
        cout << l << r <<endl;  
    }
}