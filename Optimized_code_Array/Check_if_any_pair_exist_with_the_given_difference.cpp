#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j=1,Current_diff,diff;
    cin >>n>>diff;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    i=0;
    while(i<n && j<n){
        Current_diff =arr[j]-arr[i];
        if(i!=j && Current_diff==diff)
        {   cout<<"true";
            break;
        }
        
        else if(Current_diff<diff)
        {
            j++;
        }
        else
            i++;
    }
    
}