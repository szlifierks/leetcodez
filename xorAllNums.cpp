#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;
        
        for (int num : nums1) {
            xor1 ^= num;
        }
        
        for (int num : nums2) {
            xor2 ^= num;
        }
        
        int res = 0;
        if (nums2.size() % 2 != 0) {
            res ^= xor1;
        }
        if (nums1.size() % 2 != 0) {
            res ^= xor2;
        }
        
        return res;
    }
};
