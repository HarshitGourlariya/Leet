#include<bits/stdc++.h>
using namespace std;
int voting(int arr[],int n)
{
    int count =0;
    int candidate =0;
    for(int i=0;i<n;i++)
    {
        int num = arr[i];
        if(count==0)
        {
            candidate = num;
            count=1;
        }
        else if(num == candidate)
        count++;
        else
        count--;
    }
    count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        count++;
        if(count > n/2)
        return candidate;
    }
    return -1;
}
int main()
{
    int i,n,res;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    res = voting(arr,n);
    cout << res;
}