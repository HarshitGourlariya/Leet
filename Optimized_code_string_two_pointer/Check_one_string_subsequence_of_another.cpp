#include<bits/stdc++.h>
using namespace std;
bool check(string s1,string s2)
{
int i=0,j=0;
while(i<s1.length() &&j<s2.length())
{
    if(s1[i]==s2[j])
    {
        i++;
    }
    j++;
}
if(i==s1.length())
return true;
else
return false;

}
int main()
{
    string s1,s2;
    cin >>s1 >>s2;
    int result = check(s1,s2);
    cout << result;
}