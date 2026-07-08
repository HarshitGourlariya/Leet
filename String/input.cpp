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

    // without declaring n
    // This loop runs continuously as long as 'cin' successfully reads a word
    vector<string> s; // Empty vector, no 'n' needed!
    string word;

    // This loop runs continuously as long as 'cin' successfully reads a word
    while (cin >> word) {
        s.push_back(word); // Add the word to the end of the vector
    }
    // Reverse the vector exactly as you did before
    reverse(s.begin(), s.end());

    // Range-based for loop to print it (cleaner syntax!)
    for (string w : s) {
        cout << w << " ";
    }
    // toh esmai hamm ek extra string word define kr re hai and then uss word mai store kr ke then vector mai push kr re hai 
    // and then print karwa re hai 
}