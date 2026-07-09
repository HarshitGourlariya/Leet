#include<bits/stdc++.h>
using namespace std;


bool Sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int  main()
{
    int i,n,res;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    res = Sorted(arr,n);
    if(res == true)
    cout << "True";
    else
    cout << "False";
}