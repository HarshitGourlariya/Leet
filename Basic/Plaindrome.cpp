#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rev,n,d,p;
    cin >> n;
    p=n;
    rev=0;
    while(n!=0)
    {
        d = n%10;
        rev = (rev*10)+d;
        n=n/10;
    }
    if(rev==p)
    {
        cout << "Plaindrome";
    }
    else
    cout << "Not Plaindrome";
   
}