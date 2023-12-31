#include <iostream>
#include <algorithm>
using namespace std;
long long totals[10011];

// select the I'th smallest element from totals[0]...totals[N-1]
long long select(int N, int I) {
    sort(totals, totals+N);
    return totals[I-1];
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int N, K, E, M;
        cin >> N >> K >> E >> M;
        for (int i = 0; i < N-1; i++) {
            long long total = 0;
            for (int j = 0; j < E; j++) {
                long long score;
                cin >> score;
                total += score;
            }
            totals[i] = total;
        }
        long long x = select(N-1, N-K);
        long long y = 0;
        for (int j = 0; j < E-1; j++) {
            long long score;
            cin >> score;
            y += score;
        }
        long long answer = max(0LL, x - y + 1);
        if (answer > M) {
            cout << "Impossible" << endl;
        } else {
            cout << answer << endl;
        }
    }
}


//references : https://www.codechef.com/problems/ENTEXAM?tab=statement
