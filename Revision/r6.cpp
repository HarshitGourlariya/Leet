#include<bits/stdc++.h>
using namespace std;
int max_1(int x , int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int multi(int arr[],int n)
{
    int i;
    int max = INT_MIN, smax = INT_MIN;
    int min = INT_MAX, smin = INT_MAX;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax)
        {
            smax = arr[i];
        }

        if(arr[i]<min)
        {
            smin = min;
            min = arr[i];
        }
        else if(arr[i]<smin)
        smin = arr[i];
    }
    return max_1(max*smax,min*smin);

}
int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int res = multi(arr,n);
    cout << res;
}
