#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T,X,Y,N,Z,i;
	cin >> T;
	for(i=0;i<T;i++)
	{
	    cin >> X >> Y >> N;
	    if(Y*N<X){
	        Z=X-(N*Y);
	        cout << Z << endl;
	    }
	    else
	    cout << "0"<< endl;
	}

}
