#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,i,N,A,B,C;
	cin >> T;
	for(i=0;i<T;i++)
	{
	    
	    cin >> N >> A >> B;
	    if(A>B && N>=A){
	        while(N>=A){
	     
	           C= N-A+B;
	           N=N-A+B;
	        }
	        cout << C<<endl;
        }
	    else
	       cout << N << endl;         
	}

}
