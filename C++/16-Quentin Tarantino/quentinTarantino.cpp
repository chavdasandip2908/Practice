#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int arr[n],arrMaxEle=0,flag=0,repe=0;
	   
	   for(int i=0;i<n;i++) {
	       cin>>arr[i];
	       if(arr[i]>=arrMaxEle) arrMaxEle=arr[i];
	       else flag=1;
	       for(int j=0;j<i;j++) {
	           if(arr[j]==arr[i]) {
	               repe=1;
	           }
	       }
	       
	   }
	   if(flag==1 && arrMaxEle==n && repe!=1)
	   {
	       cout<<"yes\n";
	   }
	   else {
	       cout<<"no\n";
	   }
	}
	return 0;
}

// references : https://www.codechef.com/problems/KOL16J?tab=statement
