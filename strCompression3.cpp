//3163. String Compression III

#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    string compressedString(string word) {
        if (word.length() > 0) {
            string comp;

            int counter = 1;

            for (size_t i = 0; i < word.length(); i++) {
                if (word[i] == word[i+1] && counter < 9) {
                    counter++;
                }
                else {
                    comp += to_string(counter) + word[i];

                    counter = 1;
                }
            }

            return comp;
        }

        return "";
    }
};
