#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    cin >>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        
    }
   int right =0;
   int left =k-1;
   for(i=0;i<k;i++)
   {
       while(right<=left){
       int temp = arr[right];
       arr[right]=arr[left];
       arr[left]=temp;
       right++;
       left--;
       }
       
   }
   for(i=0;i<n;i++)
   {
       cout << arr[i]<<" ";
   }
}