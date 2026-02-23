#include<bits/stdc++.h>
using namespace std;

 void Backtrack(int i,int n)
{
      if(i>1)
      return;
      Backtrack(i-1,n); // Basically jb tk ye function calls khtam nhi hogi print hota rhaiga and last function call return hogi
      cout << i << " "; // then jaake print hoga i an dvo 1 hi print hoga then 2 and so on. 
}
//this is how we use backtrack. 
int main()
{
    int i,n;
    cin >> n;
    Backtrack(n,n);


}
