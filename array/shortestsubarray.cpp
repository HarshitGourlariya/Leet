#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k;
    cin >> n >> k ;
    int arr[n];
    int window = 0 , mini =n,left=0;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(i=0;i<n;i++)
    {
        window += arr[i];

        while(window>k)
        {
         window -= arr[left];
         left++;
        }
        if(window==k)
        mini =min(mini,i-left+1);
        
     }
    cout << mini <<" ";

}
