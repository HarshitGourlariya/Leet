#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;  // One way of input string without space 
    cout << s[0];
    getline(cin,s); // will take everything until the enter is pressed.
    cin.ignore(); // now it will work perfectly no enter issue if number is used 
     int n;
    vector<string> s(n);
    for(int i=0;i<n;i++) // n ka size define krna pdega ya input lena pdega 
    {
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
   cout << s[i] << " ";
    }


}