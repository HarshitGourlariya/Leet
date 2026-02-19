#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    /*                   {Space,Star,Space}
    *                       {3,1,3}
   ***                       {2,3,2}
  *****                      {1,5,1}
 *******                     {0,7,0}
    
    
 So, in this space is decreasing so we can use {j<n-i-1}
 for stars we can use {2*i+1}
 and then again for space we can use {j<n-i-1}

 Here, We have to apply three inner loops to print this pattern
    */

 for(i=0;i<n;i++)
 {
    for(j=0;j<n-i-1;j++)
    {
        cout << " ";
    }
    for(j=0;j<2*i+1;j++)
    {
        cout << "*";
    }
    for(j=0;j<n-i-1;j++)
    {
        cout << " ";
    }
    cout<< endl;
 }
 
}