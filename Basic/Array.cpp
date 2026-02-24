#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1];

    arr[1] += 10;
    cout << arr[1];

    //2D array
    int arr1 [3][5];
    arr1 [1][2] = 10;
    cout << arr1 [1][2];
    return 0;
}