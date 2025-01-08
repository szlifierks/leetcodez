#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    bool isPrefixAndSuffix(string& a, string& b) {
        bool isSuffix = true, isPrefix = true;

        if (a.size() > b.size()) {
            return false;
        }
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[b.size() - a.size() + i]) {
                isSuffix = false;
            }
            if (a[i] != b[i]) {
                isPrefix = false;
            }
        }
        return isSuffix && isPrefix;


    }

    int countPrefixSuffixPairs(vector<string>& words) {

        int s = words.size();
        int count = 0;

        for (int i = 0; i < s; i++) {
            for (int j = i + 1; j < s; j++) {
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};
