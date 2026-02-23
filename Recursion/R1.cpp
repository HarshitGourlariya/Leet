#include<bits/stdc++.h>
using namespace std;


void f(int i,int n){
    if(i==n)    //Base CASE
    return;
    cout << "Harshit"<< endl;
    f(i+1,n);  //Function calling itself  <-- Recursion 
}
int main()
{
    int i,n;
    cin >> n;
    f(0,n); //fucntion call 

}