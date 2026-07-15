#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ind=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {   
            int temp = arr[i];
            arr[i] = arr[ind];
            arr[ind] = temp;
            ind++;
        }

    }
    for(i=0;i<n;i++)
    {
        cout << arr[i];
    }

}