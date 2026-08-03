#include<bits/stdc++.h>
using namespace std;
int check(string s, int left, int right)
{
    while(left>=0 && right<s.length() && s[left]==s[right])
    {
        left--;
        right++;
    }
    return right-left-1;  //?
}
string palin(string s)
{
    if(s.length()==0)
    return "";
 
    int start=0;
    int end=0;
    for(int i=0;i<s.length();i++)
    {
        int len1 = check(s,i,i);
        int len2 =check(s,i,i+1);
        
        int len = max(len1,len2);
        
        if(len>end-start+1)   //?
        {
            start = i-(len-1)/2;
            end = i+ len/2;
        }
    }
    string s1;
    while(start<=end)
    {
       s1 +=s[start];
       start++;
    }
    return s1;
}
int main()
{
   string s;
   cin >> s;
   string result = palin(s);
   cout << result;
}