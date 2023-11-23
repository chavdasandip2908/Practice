#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int a,b;
	    cin>>a>>b;
	    int maximum=a+b;

	    int a1=a%10;
	    int a2=a/10;
	    int b1=b%10;
	    int b2=b/10;

	    maximum = max(maximum , a2*10+b1+b2*10+a1);
	    if(b2) maximum = max(maximum , a2*10+b2+a1*10+b1);
	    if(a2) maximum = max(maximum , b1*10+a1+b2*10+a2);
	    if(a2 && b2) maximum = max(maximum , b2*10+a1+a2*10+b1);
	    
	    cout<<maximum<<endl;
	}
	return 0;
}

// references : https://www.codechef.com/problems/SWPDGT?tab=statement
