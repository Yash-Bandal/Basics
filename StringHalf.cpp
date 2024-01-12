#include <string>
#include <unordered_set>

class Solution {
public:
    bool halvesAreAlike(std::string s) {
        auto isVowel = [](char ch) {
            std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            return vowels.count(ch) > 0;
        };

        int n = s.size();
        int vowelCount = 0;

        for (int i = 0; i < n / 2; ++i) {
            if (isVowel(s[i])) {
                vowelCount++;
            }
            if (isVowel(s[n / 2 + i])) {
                vowelCount--;
            }
        }

        return vowelCount == 0;
    }
};
