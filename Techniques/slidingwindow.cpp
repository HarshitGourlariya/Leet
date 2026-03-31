// SLIDING WINDOW TECHNIQUE
//-> majorly ye use hota hai jb sub arrays ke saath kuch peform krna hota hai
//-> ye 2 types ka hai Fixed Sliding window and Dynamic Sliding window technique.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7, k = 3;
    int arr[] = {2, 1, 5, 1, 3, 2};

    int window_sum = 0;

    // Step 1: first window
    for(int i = 0; i < k; i++)
    {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Step 2: slide the window
    for(int i = k; i < n; i++)
    {
        window_sum += arr[i];      // add next element
        window_sum -= arr[i-k];    // remove previous element

        max_sum = max(max_sum, window_sum);
    }

    cout << max_sum;
}