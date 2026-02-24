#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        cout <<"FAlse";
        return 0;
       
    }
    cout << "True";
}