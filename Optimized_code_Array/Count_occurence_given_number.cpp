#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,key,count=0;
    cin >> n >> key;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]== key)
        count++;

    }
    cout << count;
}