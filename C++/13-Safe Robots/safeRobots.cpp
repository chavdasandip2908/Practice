#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin >> s;
	    
	    int sa, sb;
	    cin >> sa >> sb ;
	    
	    int n = (int)s.size();
	    int posa = -1, posb = -1;
	    for (int i = 0; i < n; i++) {
	        if (s[i] == 'A' ) {
	            posa = i ;
	        }
	        if (s[i] == 'B' ) {
	            posb = i ;
	        }
	    }
	    
	    int dist = posa - posb ; 
	    
	    if (dist%(sa + sb) == 0 ) {
	        cout << "unsafe" << endl ;
	    }
	    else{
	        cout << "safe" << endl ;
	    }
	    
	}
	return 0;
}


//references  : https://www.codechef.com/problems/SAFEROBO?tab=statement
