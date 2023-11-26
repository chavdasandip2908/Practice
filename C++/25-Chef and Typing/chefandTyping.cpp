#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unordered_map<string, int> wordTimes;
        int totalTime = 0;

        for (int i = 0; i < N; ++i) {
            string word;
            cin >> word;

            if (wordTimes.find(word) != wordTimes.end()) {
                totalTime += wordTimes[word] / 2;
            } else {
                int time = 0;
                char prevHand = ' ';
                
                for (char c : word) {
                    if (c == 'd' || c == 'f') {
                        if (prevHand == 'd' || prevHand == 'f') {
                            time += 4;
                        } else {
                            time += 2;
                        }
                        prevHand = c;
                    } else if (c == 'j' || c == 'k') {
                        if (prevHand == 'j' || prevHand == 'k') {
                            time += 4;
                        } else {
                            time += 2;
                        }
                        prevHand = c;
                    }
                }

                wordTimes[word] = time;
                totalTime += time;
            }
        }

        cout << totalTime << endl;
    }

    return 0;
}

// references : https://www.codechef.com/problems/TYPING?tab=statement
