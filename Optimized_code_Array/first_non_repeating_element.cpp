#include<bits/stdc++.h>
using namespace std;
int first_non_repeating(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
         if(count==1)
            {
                return arr[i];
            }
    }
    return -1;

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
    int res = first_non_repeating(arr,n);
    cout << res;
    
}