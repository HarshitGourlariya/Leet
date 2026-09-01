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
    int current =0;
    int w =3;
    for(i=0;i<w;i++)
    {
        current +=arr[i];
    }
    int max = current;
    for(i=1;i<=n-w;i++)
    {
        current =  current - arr[i-1]+arr[i+w-1];
    
    if(current>max)
    {
        max = current;
    }
}
    cout << max;
    
}