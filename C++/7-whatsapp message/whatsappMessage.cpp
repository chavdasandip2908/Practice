#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z ;
	    int unreadMsg = x - y ;
	    cout << unreadMsg * z << endl;
	}
	return 0;
}


//references : https://www.codechef.com/problems/WHATSAPP
