#include <string>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        vector<int> vowId;
        for (int i = 0; i < s.size(); i++) {
            for (char v : vowels) {
                if (s[i] == v) {
                    vowId.push_back(i);
                }
            }
        }
        for (int i = 0; i < vowId.size()/2; i++) {
            swap(s[vowId[i]], s[vowId[vowId.size()-1-i]]);
        }
        return s;
    }
};
