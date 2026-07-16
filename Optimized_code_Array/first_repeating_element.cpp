#include<bits/stdc++.h>
using namespace std;
int repeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int res = repeating(arr,n);
    cout << res;
    
}