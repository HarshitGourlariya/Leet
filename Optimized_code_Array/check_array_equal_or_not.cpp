#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int brr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=brr[i])
        return false;

    }
 return true;
}
int main()
{
    int i,n,res;
    cin >>n;
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> brr[i];
    }
    res = check(arr,brr,n);
    if(res == false)
    cout <<"false";
    else
    cout <<"true";

    
}