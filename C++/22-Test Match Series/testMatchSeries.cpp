#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
    	int matches=5 ,india = 0 ,england = 0;
    	  while(matches--) {
    	  	    int r ;
    	  	    cin >> r ;
    	  	    if(r==1) india++;
    	  	    else if (r==2) england++;
    	  }
    
    	if(india>england) {
            cout << "INDIA" << endl;
    	}
    	else if(india<england) {
            cout << "ENGLAND" << endl;
    	}
    	else {
    	     cout << "DRAW" << endl;
    	}
    }
	return 0;
}


// references : https://www.codechef.com/problems/TESTSERIES?tab=statement
