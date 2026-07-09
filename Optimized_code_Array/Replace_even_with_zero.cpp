#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
            
        }
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    
}