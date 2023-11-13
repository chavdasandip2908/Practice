#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
    
    int t;
    std::cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n;
        std::cin >> n;

        std::string inputString;
        std::cin >> inputString;

        int ans = 0;

        for (int i = 0; i < n - 1; ++i) {
            if (st.find(inputString[i]) == st.end() && st.find(inputString[i + 1]) != st.end()) {
                ans += 1;
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}

// references : https://www.codechef.com/problems/CV?tab=statement
