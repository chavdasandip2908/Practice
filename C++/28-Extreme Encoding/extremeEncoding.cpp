#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t ;
    int j = 1 ;
    while(t--) {
        int n , r;
        cin>>n;
        int a[n] , b[n] ;
        
        for ( int i = 0 ; i < n ; i++ ){
            cin >> r ;
            a[i] = r & 65535;
            b[i] = r >> 16;
        }
        cout << "Case " << j << ":" << endl ;
        j++;
        
        for( int i = 0; i < n; i++ ) {
            cout<<a[i]<<" ";    
        }
        cout<<endl;
        
        for( int i = 0; i < n ; i++ ) {
            cout<<b[i]<<" ";    
        }
        cout<<endl;
        
    }
	return 0;
}

// references : https://www.codechef.com/problems/KOL16B?tab=statement
