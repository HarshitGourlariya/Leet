#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    char arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    char hash[n+1] = {0}; // hamm ye 0 ko intialize esliye krti hai then add hokar 1 ho varna garbage value mai +1 hoajyega.
    
    for(i=0;i<n;i++)
    {
        hash[arr[i]] +=1;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char str;
        cin >> str;
        cout << hash[str] << endl;
    }

}