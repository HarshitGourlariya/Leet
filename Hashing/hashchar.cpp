#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hash[256] ={0};

    for( int i=0;i<s.size();i++)
    {
      hash[s[i]]++;  
    }

int q;
cin >> q;
while(q--)
{
   char p;
   cin >> p;
   cout << hash[p] << endl;
}
return 0;

}

/*
esmai kya hora hai ki jb bhi s[i] mai let say position 0 pai 'a' store hai toh ASCII value aayegi and ascii value hai 97 toh a
array mai 97 position pai +1 ho jayega 

and jb hamm call krte hai toh a ko vapas ascii value mai convert hoga then 97 pos pai jo store hai vo print ho jayega 
*/