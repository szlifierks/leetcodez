#include <vector>
#include <deque>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        long int n = nums.size();
        deque<pair<long long, int>> dq;
        long long sum = 0;
        int minLength = n + 1;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (sum >= k) {
                minLength = min(minLength, i + 1);
            }
            while (!dq.empty() && sum - dq.front().first >= k) {
                minLength = min(minLength, i - dq.front().second);
                dq.pop_front();
            }
            while (!dq.empty() && sum <= dq.back().first) {
                dq.pop_back();
            }
            dq.emplace_back(sum, i);
        }

        return minLength == n + 1 ? -1 : minLength;
    }
};
