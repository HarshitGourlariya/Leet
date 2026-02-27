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


map<int,int> mpp; // kya data type hoga and variable define kr diya hai. 

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