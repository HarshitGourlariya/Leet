#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >>n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int maxlen = 1;
    int currentlen=1;
    int endvalue=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        currentlen++;
        else
        currentlen =1;

        if(currentlen > maxlen)
        {
            maxlen=currentlen;
            endvalue =i;
        }
    }
    int startindex = endvalue-maxlen+1;
    for(i=0;i<maxlen;i++)
    {
       brr[i]=arr[startindex+i];

    }
    for(i=0;i<maxlen;i++)
    {
        cout << brr[i]<<" ";
    }
}