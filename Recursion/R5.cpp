#include<bits/stdc++.h>
using namespace std;

void add(int sum ,int n)
{ 
    int d;
    if(n==0){
    cout << sum << endl;
    return;
    }
    d = n%10;
    n=n/10;
    sum = sum+d;
    add(sum,n);
    

}

int main()
{
    int n;
    cin >> n;
    add(0,n);

}
