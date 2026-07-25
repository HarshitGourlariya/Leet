#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
            return true;
            }
        }
    }
    return false;
    
}
int main()
{
    int i,n;
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int result = check(arr,n);
    cout << result;
    
}