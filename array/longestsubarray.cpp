#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k,left=0;
    int max_len=0;
    cin >> n >> k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
int window_sum=0;
    for(i=0;i<n;i++)
    {
        window_sum += arr[i];
       cout << window_sum << " ";

        while(window_sum==k)
        {
            window_sum -= arr[left];
            left++;
        }
        
        max_len= max(max_len,i-left+1);

        

    }

    cout << max_len << endl;


}