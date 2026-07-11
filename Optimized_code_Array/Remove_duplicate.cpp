#include<bits/stdc++.h>
using namespace std;
int  remove_duplicate(int arr[],int n)
{
    int i=0,j;
    for(j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {   
            i++;
            arr[i] = arr[j];
        }
    } 
     return i+1;
}
int main()
{
    int i=0,n,j;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int res = remove_duplicate(arr, n);
    for(i=0;i<res;i++)
    {
        cout<< arr[i] << " ";
    }
}