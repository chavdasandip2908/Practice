#include<iostream>
using namespace std;
 
int main(){
    int t;  
    cin>>t;
    while(t--){
        int temperature;
        cin>>temperature;
        if(temperature>24){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

//references : https://www.codechef.com/problems/SUNNYDAY
