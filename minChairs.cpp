#include <string>

using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int res = 0;
        int maxPpl = 0;

        for (size_t i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (c == 'E') {
                maxPpl++;
            } else {
                if (maxPpl > res) {
                    res = maxPpl;
                }
                maxPpl--;
            }

            if (i == s.length() - 1) {
                if (maxPpl > res) {
                    res = maxPpl;
                }
            }
        }

        return res;
    }
};
