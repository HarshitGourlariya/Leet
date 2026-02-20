#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,d,n,sum,num;
    sum=0
    num=n

    while(n>0)
    {
        d=n%10;
        sum=sum+d*d*d;
        n=n/10
    }
    if(sum==num)
     cout << "Armstrong";
    
}