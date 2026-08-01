#include<bits/stdc++.h>
using namespace std;

void reverse_1(string &s,int left,int right)
{
    
    while(left<right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    
}

string reverse_words(string s)
{
    reverse_1(s,0,s.length()-1);
    int start=0;
    for(int end =0;end<s.length()-1;end++)
    {
        if(s[end]==' ')
        {
            reverse_1(s,start,end-1);
            start = end+1;
        }
    }

    reverse_1(s,start,s.length()-1);
    return s;

}
int main()
{
    string s;
    getline(cin,s);
    cout <<reverse_words(s);

}