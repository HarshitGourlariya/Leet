#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,avg;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    avg = (n+1)/2;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>avg)
        cout << arr[j]<< " ";
    }
}