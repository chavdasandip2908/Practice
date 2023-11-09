#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int totleWeight = x * y ;
	    if( totleWeight <= 500 && x<=8) {
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}


// references : https://www.codechef.com/problems/MAXCAP
