#include <bits/stdc++.h>
using namespace std;

int  main() {
	int t ;
	cin>>t ; 
	while(t--) {
	    int n ; 
	    cin>>n ;
	    vector<int>v ;
	    while(n>0) {   
	        int k = n%10 ;
	        n/=10 ;
	        v.push_back(k) ;
	    }
	    int k = 0 ,ans = 0;
	    int f = -1 ;
	   for(int i = v.size() -1 ; i>=0 ; i--) {
	       if(v[i]>v[i-1]) {
	           k = i; 
	           f = i ;
	           break ;
	       }
	       ans = ans*10 + v[i] ;
	   }
	   
	   if(f == -1 ) {
	        ans = 0 ;
	        for(int i = v.size() -1 ; i>0 ; i--) {
	            ans = ans*10 + v[i] ;
	        }
	        cout<<ans<<endl ; 
	        continue ;
	   }
	   
	   for(int i = k-1 ; i>=0 ;i--) {
	       ans = ans*10 + v[i] ;
	   }
	   
	    if(f!=-1)
	        cout<<ans<<endl;   
	} 
	return 0;
}

//references : https://www.codechef.com/problems/DISCSHOP?tab=statement
