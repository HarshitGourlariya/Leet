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
    int left =0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            int temp = arr[left];
            arr[left]=arr[j];
            arr[j]=temp;
            left++;
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

  
}