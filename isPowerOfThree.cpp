class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        return n % 2 == 1;
    }
};
