/*
Hashing bascially use hoti hai for the frequency counts of the numbers present in an array 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)  // this loop is used to take inputs in an array 
    {
        cin >> arr[i];
    }

    int hash[n+1] ={0};  // Yha pai hmne hash array declare kiya hai jo array ke size se ek jada hota hai. 

    for(i=0;i<n;i++)
    {
        hash[arr[i]] +=1;  //yha pai lets say arr ki 0th pos pai 2 hai toh hash array mai +1 ho store hoga for 2. 
    }

    int q;
    cin >> q; // ye value dege ki loop kitni baar chlega  esko maane number of test case jaisa ki phele 1 ke liye dekh liya then 2 ke
    while(q--) // liye bhi dekh liya as q ki value 2 set ki thi 
    {
         int num;   // then edhar value dere hai ki hmko ye number dekhna hai ki kitni baar aaya hai. 
         cin >> num;
         cout << hash[num] << endl;
    } 
}