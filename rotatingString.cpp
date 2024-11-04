#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() == goal.length()) {
            string look = s + s;

            if (look.find(goal) != string::npos) {
                return true;
            }
        }
        return false;
    }
};
