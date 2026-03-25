#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,num,res;
    cin >> n >> num;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        { res = 1;
        break;}
        
    }
    if(res==1)
    cout <<"Found"<<endl;
    else
    cout<<"-1"<<endl;
  
    
}