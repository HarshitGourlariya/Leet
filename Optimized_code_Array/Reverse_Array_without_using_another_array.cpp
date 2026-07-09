#include<bits/stdc++.h>
using namespace std;
int main()
{   int i,n;
    cin >> n;
    int arr[n];
    int j=n-1;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int left=0;
    while(left<j)
    {
        int temp =arr[left];
        arr[left] = arr[j];
        arr[j]= temp;
        left++;
        j--;
    }
    for(int k=0;k<n;k++)
    {
        cout << arr[k]<< " ";
    }
    
}