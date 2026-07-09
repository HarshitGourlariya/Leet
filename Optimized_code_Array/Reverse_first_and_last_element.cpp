#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,left,right;
    cin >> n ;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    left =0;
    right =n-1;
    for(i=0;i<n;i++)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
}