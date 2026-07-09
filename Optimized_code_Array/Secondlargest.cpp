#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,max=0,smax;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]>max)
    {
        smax = max;
        max =arr[i];
    }
    else
    if(arr[i]>smax && arr[i]<max)

    {
      smax = arr[i];
    }  
}
cout << smax;
}