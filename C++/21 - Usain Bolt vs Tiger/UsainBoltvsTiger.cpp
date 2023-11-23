#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--) {
	    int finish, distanceToBolt, tigerAcc, boltSpeed;
	    cin >> finish >> distanceToBolt >> tigerAcc >> boltSpeed;
	    int dist_tiger = finish + distanceToBolt;
	    float time_tiger = sqrt(2 * (float) dist_tiger / (float) tigerAcc);
	    float time_bolt = (float) finish / (float) boltSpeed;
	    
	    if(time_tiger <= time_bolt){
	        cout << "Tiger" << endl;
	    }
	    else{
	        cout << "Bolt" << endl;
	    }
	}
	return 0;
}

// references : https://www.codechef.com/problems/USANBOLT?tab=statement
