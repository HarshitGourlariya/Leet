#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >>n;
    int left =0;
    int right = n.length()-1;
    while(left<right)
    {
        int temp = n[left];
        n[left] = n[right];
        n[right]=temp;
        left++;
        right--;
    }
    cout << n;
}