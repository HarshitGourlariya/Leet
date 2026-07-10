#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=0,smax=0,tmax;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            tmax = smax;
            smax = max;
            max =arr[i];
        }
        else if(arr[i]>smax && arr[i]<max)
        {
            tmax = smax;
            smax = arr[i];

        }
        else if(arr[i]>tmax && arr[i]<smax)
        {
            tmax = arr[i];
        }
    }
    cout << tmax << " ";
}