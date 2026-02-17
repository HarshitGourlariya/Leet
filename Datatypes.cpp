#include<bits/stdc++.h>
using namespace std;

int main(){
    // int
    int x;
    //long
    long w;
    // long long
    long long q;

    //float
    float y;

    //string
    string s; // In this if Hey Programmer is given as input only "Hey" will be shown in the output
    cin >> s;
    cout << s;
    

    string s1,s2; // Through this if Hey Harshit is given as input it will be printed as Hey Harshit.
    cin >> s1 >> s2;
    cout << s1 << " " << s2;


    // To put an entire line into the string 
    string s3;
    getline(cin,s3); // the getline function is used to take the entire sentence and put it into the string s3.
    cout << s3;    // In this the next line is not picked up only the first line is printed in the output.

    //char
    char ch='g';
    cout << ch;
    



 return 0;
}