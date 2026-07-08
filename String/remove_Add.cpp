#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s.erase(2,1); //erase(start_index,number of characters)
    s.pop_back(); // remove from the end
    s.push_back('s'); //add the single character in the end
    string word = "Data"; // to concatenate 
    word += " Structure";    // Appends a string
    cout << word << endl;    // Output: Data Structure

}