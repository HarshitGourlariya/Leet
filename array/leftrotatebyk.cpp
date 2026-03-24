#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,n,j;
    cin >> n >> k;
    int arr[n];
    int temp[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(j=0;j<n;j++)
    {
       temp[j]=arr[j+k];
    }
    int z=0;
  while(k>0)
  {
    temp[n-k]=arr[z];
    k--;
    z++;
  }
  for(i=0;i<n;i++)
  {
    cout << temp[i]<<" ";
  }
}