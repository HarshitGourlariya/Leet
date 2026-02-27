/*
MAP
map<number,frequency>

-> hamm array se bhi use kr skte hai for frequency counter lekin vo jada space leta hai esliye hamm map ka use krte hai 
*/
#include<bits/stdc++.h>
using namespace  std;

int main()
{
    int i,n;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }


unordered_map<int,int> mpp; // kya data type hoga and variable define kr diya hai. 

for(i=0;i<n;i++)
{
    mpp[arr[i]]++;
}

int q;
cin >> q;
while(q--)
{
    int num;
    cin >> num;
    cout << mpp[arr[num]] << endl;
}
}

// Map stores the value in sorted order.
// time complexity of map in storing in fetching is logn.
// unordered map bss sorted order mai nhi krta hai store.
// unordered map ki for storing and fetching avg, TC and best TC hoti hai O(1).
// in worst case it ends up taking 0(n).

/*
Important note:
always use unorderd map if the time limit exceeds then use map 

*/