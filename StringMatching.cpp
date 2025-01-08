#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int s = words.size();
        vector<string> res;

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < s; j++) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    res.push_back(words[i]);
                    break;
                }
            }
        }

        return res;
    }
};
