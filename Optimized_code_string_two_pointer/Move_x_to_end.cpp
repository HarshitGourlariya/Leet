#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int i;
    int left=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='x')
        {
            char temp = s[i];
            s[i] = s[left];
            s[left] = temp;
            left++;
            
        }
    }
    cout << s;
}