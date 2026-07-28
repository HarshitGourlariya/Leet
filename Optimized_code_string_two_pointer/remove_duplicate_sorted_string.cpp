#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin >>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        cout << s[i];
    }
}