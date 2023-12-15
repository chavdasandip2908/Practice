#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while (t--) {
	    int n ,m ;
	    
	    cin >> n ;
	    int a[n] ;
	    
	    for(int k = 0 ; k < n ; k++ ) {
	        cin >> a[k] ;
	    }
	    
	    cin >> m ;
	    int b[m] ;
	    
	    for( int k = 0 ; k < m ; k++ ) {
	        cin >> b[k] ;
	    }
	    
	    int i = 0 , j = 0 ;
	    
	    while (i < n && j < m ) {
	        if( a[i] == b[j] ) {
	            i++;
	            j++;
	        }
	        else {
	            i++;
	        }
	    }
	    
	    if( j == m ) {
            cout << "Yes" << endl ; 
        }
	    else {
            cout << "No" << endl ;
	   }
	}
	return 0;
}



// references : https://www.codechef.com/problems/CHEFSQ?tab=statement

