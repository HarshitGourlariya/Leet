#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n,i,j;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(j=0;j<n;j++)
    {
       s.insert(arr[j]);

    }

    for(int val:s)
    {
        cout << val << " ";
    }

}