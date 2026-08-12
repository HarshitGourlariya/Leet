#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin >>n;
    int arr[n];
  
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int count =0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0 && (arr[i] & (arr[i]-1))==0)
        {
            count++;
        }
    }
    cout << count;

}
// arr[i] & arr[i-1] converts to 4 digit binary number then they are calculated using AND table if 0000 its true