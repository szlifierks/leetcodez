#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n) return 0;

        unordered_map<int, int> unique;
        long long maxsum = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            unique[nums[i]]++;
            sum += nums[i];

            if (i >= k) {
                unique[nums[i - k]]--;
                if (unique[nums[i - k]] == 0) {
                    unique.erase(nums[i - k]);
                }
                sum -= nums[i - k];
            }

            if (freq_map.size() == k) {
                maxsum = max(maxsum, current_sum);
            }
        }
        return maxsum;
    }
};
