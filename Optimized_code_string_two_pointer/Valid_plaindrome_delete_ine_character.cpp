#include<bits/stdc++.h>
using namespace std;
bool isPlaindrome(string s,int left,int right)
{
    
    while(left<right)
    {
        if(s[left]!=s[right])
        return false;
        left++;
        right--;
    }
    return true;

}
bool Plaindrome(string s)
{
    int left =0;
    int right =s.length()-1;
    while(left<right)
    {
        if(s[left]==s[right])
        {
        left++;
        right--;
    }

        else 
        return isPlaindrome(s,left+1,right) || 
        isPlaindrome(s,left,right-1);

    }
    return true;
}
int main()
{
    string s;
    cin >>s;
    int result = Plaindrome(s);
    cout << result;
    

    


}
