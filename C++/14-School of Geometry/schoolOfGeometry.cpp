#include <bits/stdc++.h>
using namespace std;

int main() {
	int r;
	cin>>r;
	while(r--){
	    int n ;
        cin >> n ;
        
        vector<int>a(n);
        vector<int>b(n);

        for(int i = 0; i < n ; i++) {
            cin>>a[i];
        }
    
        for(int i = 0; i < n ; i++) {
            cin>>b[i];
        }
    
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    
        long long ans =0;
        
        for(int i = 0 ; i < n ; i++ ) {
            if( a[i] < b[i] ) ans+=a[i];
            else ans+=b[i];
        }
        cout<<ans<<endl;
	}
	return 0;
}

//references : https://www.codechef.com/problems/SNUG_FIT?tab=statement
