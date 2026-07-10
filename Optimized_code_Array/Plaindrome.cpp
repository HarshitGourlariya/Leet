#include<bits/stdc++.h>
using namespace std;
bool plaindrome(int arr[], int i, int j)
{
    while(i,j)
    {
        if(arr[i]!=arr[j])
        return false;
        else
        {
            j--;
            i++;
        }
    }
}
int main()
{
    int i,n,res;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    i =0;
    int j = n-1;
    res = plaindrome(arr,i,j);
    if(res == false)
    cout <<"false";
    else 
    cout <<"true";
}

