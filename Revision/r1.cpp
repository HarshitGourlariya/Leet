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

    sort(arr,arr+n);

    for(i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(brr[i]!=arr[i])
        {
            cout << " notsorted";
            break;
        }
        
    }
    cout << "sorted";
    
}