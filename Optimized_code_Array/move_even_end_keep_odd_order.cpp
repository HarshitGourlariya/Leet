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
    int j = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           j++;
        }

    }
    for(i=0;i<n;i++)
    {
        cout << arr[i];
    }
}