#include <iostream>
using namespace std;

int main() {
    int t, n, i, temp;
    cin >> t;

    while (t--) {
        cin >> n;
        int A[n];

        for (i = 0; i < n; i++) {
            cin >> A[i];
        }

        temp = 0;

        for (i = 1; i < n; i++) {
            if (A[i - 1] > A[i]) {
                temp++;
            }
        }

        if (temp > 1) {
            cout << "NO" << endl;
        } 
        else {
            if (temp == 0 || A[0] >= A[n - 1]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}


//references : https://www.codechef.com/problems/CARDMGK?tab=statement
