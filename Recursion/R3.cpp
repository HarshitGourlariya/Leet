#include<bits/stdc++.h>
using namespace std;

void revLinear(int i,int n)
{
    if(i>n)
    return;
    cout << n << " ";
    revLinear(i,n-1);

}

int main()
{
    int i,n;
    cin >> n;
    revLinear(0,n);

}