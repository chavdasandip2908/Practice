#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
	    int x,y;
        cin >> x >> y ;
        int moves=0;
        if(y<=x) {
            moves = x - y;
        }
        else{
            int diff = y - x ;
            if(diff % 2 == 0) {
                moves = diff / 2 ;
            }
            else {
                moves = (diff + 1) / 2 + 1 ;
            }
        }
        cout << moves << endl ; 
	}
	return 0;
}


// references : https://www.codechef.com/problems/DANCEMOVES?tab=statement
