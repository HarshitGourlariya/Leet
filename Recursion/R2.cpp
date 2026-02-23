#include<bits/stdc++.h>
using namespace std;

void linear(int i, int n)
{
    if(i>n)
    return;
    cout << i << endl;
    linear(i+1,n);
}

int main()
{
    int i,n;
    cin >>n ;
    linear(1,n);
}