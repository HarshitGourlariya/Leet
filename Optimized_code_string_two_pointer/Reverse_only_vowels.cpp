#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
}
int main()
{
    string s;
    cin >>s;
    int left =0;
    int right = s.length()-1;
    
    while(left<right)
    {
        while(left<right && !isVowel(s[left]))
        left++;
        while(left<right && !isVowel(s[right]))
        right--;
        
        char temp = s[left];
        s[left] = s[right];
        s[right] =temp;
        left++;
        right--;
        
    }
    cout << s;
    
}