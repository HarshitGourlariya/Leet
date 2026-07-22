#include<bits/stdc++.h>
using namespace std;
int voting(int arr[],int n)
{
    int i,candidate =0,count=0;
    for(i=0;i<n;i++)
    {
        if(count == 0)
        {
            candidate = arr[i];
            count =1;
        }
        else if(arr[i] == candidate)
        {
            count++;
        }
        else
        count--;
    }
     count = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
        if(count>n/2)
        return candidate;

    }
    return -1;
}
int main()
{
    int i,n;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
 int res = voting(arr,n);
 cout << res;
}