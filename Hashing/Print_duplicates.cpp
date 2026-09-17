#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    map<int,int> mpp;
    for(i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

 for(auto p:mpp)
 {
    if(p.second>1)
    {
        cout << p.first << " ";
    }
 }
}