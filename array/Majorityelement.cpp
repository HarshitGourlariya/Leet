#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i ,n;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int hash[n+1]={0};

    for(i=0;i<n;i++)
    {
        hash[arr[i]] +=1;
    }

    for(i=0;i<n;i++)
    {
        if(hash[arr[i]]>n/2)
        {
            cout << arr[i] << endl;
            break;
        }
        
    }

}
