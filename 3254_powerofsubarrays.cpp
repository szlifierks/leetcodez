#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        const size_t n = nums.size();
        vector<int> power;
        for (int i = 0; i < n - k + 1; i++) {
            bool isConsecutive = true;
            for (int j = 1; j < k; j++) {
                if (nums[i + j] != nums[i + j - 1] + 1) {
                    isConsecutive = false;
                    break;
                }
            }
            power.push_back(isConsecutive ? nums[i + k - 1] : -1);
        }
        return power;
    }
};
