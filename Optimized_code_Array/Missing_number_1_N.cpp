#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0,res,p;
    cin >> n;
    int arr[n];
    p = n+1;
    int total = p*(p+1)/2;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<n;j++)
    {
        sum +=arr[j];
    }
    res = total - sum;
    cout << res;

}