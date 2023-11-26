#include <iostream>
using namespace std;

int countDays(int from ,int to) {
    int count = 0 ;
    for (int i = from ; i<= to ; i++) {
	    if ( i % 4 == 0 ) {
	        count = count + 366 ;
	    }
	    else {
	        count = count + 365 ;
	    }
	}
	return count;
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
    	int year ,days , var ;
    	cin >> year ;
    	if(year <= 2000) {
            days = countDays(year , 2000);
            var = 7- (days % 7) ;
    	}
    	else {
            days = countDays( 2001 , year);
            var = days % 7 ;
    	}
    
    	string arr[7] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
        cout << arr[var] << endl;
    }
	return 0;
}


//or

#include <iostream>
using namespace std;

int countDays(int from ,int to) {
    int count = 0 ;
    for (int i = from ; i< to ; i++) {
	    if ( i % 4 == 0 ) {
	        count = count + 366 ;
	    }
	    else {
	        count = count + 365 ;
	    }
	}
	return count;
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
    	int year ,days , var ;
    	cin >> year ;
    	if(year <= 2000) {
            days = countDays(year , 2001);
            var = 7- (days % 7) ;
    	}
    	else {
            days = countDays( 2001 , year);
            var = (days % 7) ;
    	}
    switch(var){
	        case 0:
	        cout << "monday" << endl ;
	        break;
	        case 1:
	        cout << "tuesday" << endl ;
	        break;
	        case 2:
	        cout << "wednesday" << endl ;
	        break;
	        case 3:
	        cout << "thursday" << endl ;
	        break;
	        case 4:
	        cout << "friday" << endl ;
	        break;
	        case 5:
	        cout << "saturday" << endl ;
	        break;
	        case 6:
	        cout << "sunday" << endl ;
	        break;
        }
    }
	return 0;
}

//or 
#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
    	int year ;
    	cin >> year ;
        int day=(5*((year-1)%4)+4*((year-1)%100)+6*((year-1)%400))%7;
	    switch(day){
	        case 0:
	        cout << "monday" << endl ;
	        break;
	        case 1:
	        cout << "tuesday" << endl ;
	        break;
	        case 2:
	        cout << "wednesday" << endl ;
	        break;
	        case 3:
	        cout << "thursday" << endl ;
	        break;
	        case 4:
	        cout << "friday" << endl ;
	        break;
	        case 5:
	        cout << "saturday" << endl ;
	        break;
	        case 6:
	        cout << "sunday" << endl ;
	        break;
        }
        
    }
	return 0;
}



// references : https://www.codechef.com/problems/FLOW015?tab=statement

