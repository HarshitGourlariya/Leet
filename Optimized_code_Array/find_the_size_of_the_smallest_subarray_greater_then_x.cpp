#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[],int n,int x)
{
    int minlen=n+1;
    int sum =0;
    
    int start=0;
    int end;
    for(end=0;end<n;end++)
    {
        sum+=arr[end];
         while(sum>x)
    {
        minlen = min(minlen,end-start+1);
        sum-=arr[start];
        start++;
    }
        
    }
   
    if(minlen==n+1)
    return 0;

    return minlen;
}
int main()
{
    int i,n,x;
    cin >>n>>x;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int result = subarray(arr,n,x);
    cout << result;
    
}