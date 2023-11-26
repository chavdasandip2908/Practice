#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--) {
	    string num ;
	    cin >> num ;
	    string revNum = num ;
	    int n = num.length() ;
	    for( int i = 0 ; i< n / 2 ; i++ ) {
	        revNum[n-1-i] = revNum[i] ;
	    }
	    if(revNum > num ) {
	        cout << revNum << endl ;
	    }
	    else {
	        int mid = (n-1)/2;
	        for(int i=mid;i>=0;i--) {
	            if(revNum[i]!='9') {
	                revNum[i]=(revNum[i]+1);
	                break;
	            }
	            else {
	                revNum[i] = '0' ;
	            }
	        }
	        for(int i=n/2;i<n;i++) {
	            revNum[i] = revNum[n-i-1];
	        }
	        
	        if(revNum[0]=='0') {
	            revNum+='1' ;
	            revNum[0]='1' ;
	        }
	        cout<<revNum<<endl;
	    }
	}
	return 0;
}

// references : https://www.codechef.com/problems/PALIN?tab=statement

