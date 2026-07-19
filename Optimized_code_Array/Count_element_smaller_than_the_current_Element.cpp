#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j+1])
            count++;
        }
        brr[i] = count;
    }
    for(i=0;i<n;i++)
    {
        cout << brr[i] << " "; 
    }
}