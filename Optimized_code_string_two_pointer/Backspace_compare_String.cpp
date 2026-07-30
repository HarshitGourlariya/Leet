#include<bits/stdc++.h>
using namespace std;
bool backspace(string s1, string s2)
{
int skips1=0,skips2=0;
    int i=s1.length()-1;
    int j=s2.length()-1;

    while(i>=0 || j>=0)
    {
        while(i>0){
        if(s1[i]=='#')
        {
            skips1++;
            i--;
        }
        else if(skips1>0)
        {
            skips1--;
             i--;
             
        }
        else{
            break;
        }
    }
      while(j>=0){
        if(s2[j]=='#')
        {
            skips2++;
            j--;
        }
        else if(skips2>0)
        {
            skips2--;
            j--;
        }
        else
        {
            break;
        }
    }
    char c1 = (i>=0) ? s1[i]: '\0';
    char c2 = (j>=0) ? s2[j]: '\0';
    if(c1!=c2)
    {
    return false;
    }
    i--;
    j--;
    }
    return true;
}

int main()
{
    string s1,s2;
    cin >> s1>>s2;
    int result = backspace(s1,s2);
    cout << result;   
}