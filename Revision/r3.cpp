#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    int brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> brr[i];
    }
    set<int> s;
    for(i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s.insert(brr[i]);
    }

    for(int val:s)
    {
        cout << val << " ";
    }
}