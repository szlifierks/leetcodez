#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<unsigned int> bity;

        for (int i = 0; i < n; i++) {
            bity.push_back(bitset<32>(nums[i]).count());
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1] && bity[j] == bity[j + 1]) {
                    swap(bity[j], bity[j + 1]);
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return is_sorted(nums.begin(), nums.end());
    }
};

int main() {

    vector<int> jacki = { 1,5,3,8,3 };

    Solution solution;

    if (solution.canSortArray(jacki))
        cout << "mozna";
    else
        cout << "niemozna";

    return 0;

}
