#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int T,A,B,X,Y,i;
	int trade,profit,Total,final;
	cin >> T;
	for(i=0;i<T;i++)
	{
	    
	    cin >> A >> B >> X >> Y;
	    trade = A/X;
	    profit=Y-X;
	    Total=trade*profit;
	    final = Total+A+B;
	    cout << final << endl;
	    }
}


