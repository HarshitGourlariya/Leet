#include<bits/stdc++.h>
using namespace std;

void selection(int arr[] ,int n)
{
    int min,temp ,i;
    for(i=0;i<=n-2;i++)
    {
     min =i;
     for(int j=i;j<=n-1;j++)
     {
        if(arr[j]<arr[min])
        min =j;
     }
     temp = arr[min];
     arr[min] = arr[i];
     arr[i] = temp;
}
}

int main()
{
      int i,n;
      cin >> n;
      int arr[n];
     for(i=0;i<n;i++)
    {
      cin >> arr[i];
    }

    selection(arr,i);
    for( i=0 ;i<n;i++)
    {
      cout << arr[i] << " ";
     }
    return 0;
}

/*
Basically i,j,min intially 0th pos pai hai then hmne j ko traverse karwaya and min se compare jb min milla then usko j ki pos pai
le gye ek tarike se then hamne min and i ko swap kr diya hai 

// inner loop n-1 tk esliye hota hai ki first pos toh min maan li ab bacha hu array toh n-1 hi hai.
// n-2 esliye liya hai in the outerloop kyuki jb saare elements sort hote jayegai toh last element already sort ho
// jayega toh koi jaurat nhi uss position ko bhi iterate kr ke.

*/