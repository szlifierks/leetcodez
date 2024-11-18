#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        const int n = code.size();
        vector<int> result(n, 0);

        for (int i = 0; i < n; i++) {
            if (k == 0) {
                result[i] = 0;
            }

            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    sum += code[(i + j) % n];
                }
            } else {
                for (int j = 1; j <= -k; j++) {
                    sum += code[(i - j + n) % n];
                }
            }
            result[i] = sum;
        }

        return result;
    }
};
