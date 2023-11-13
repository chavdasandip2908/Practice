#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    char s[n];
	    cin >> s;
	    
	    int upperCount = 0,lowerCount=0;

            for (int i=0;i<n;i++) {
                if (isupper(s[i])) {
                    upperCount++;
                }else if(islower(s[i])){
                    lowerCount++;
                }
            }
        
            int chef=0,brother=0;
        
            if(upperCount<=k ){
                chef=1;
            }
            if(lowerCount<=k ){
                brother=1;
            }
        
            if(chef==1&&brother==1 ) {
                    cout<<"both"<<endl;
            }
            else if(chef==1) {
                 cout <<"chef"<<endl;
            }
            else if(brother==1) {
                    cout<<"brother"<<endl;
            }
            else {
                    cout<<"none"<<endl;
            }
	   
	}
	return 0;
}

// references : https://www.codechef.com/problems/GOODBAD?tab=statement
