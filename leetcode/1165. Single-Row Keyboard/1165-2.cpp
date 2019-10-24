// https://helloacm.com/single-row-keyboard-algorithms-to-estimate-the-finger-moving-time/
// https://leetcode.com/problems/single-row-keyboard/
// EASY, HASH MAP, STRING

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map<char, int> data;
        for (int i = 0; i < keyboard.size(); ++ i) {
            data[keyboard[i]] = i;
        }
        int r = data[word[0]];
        for (int i = 1; i < word.size(); ++ i) {
            r += abs(data[word[i]] - data[word[i - 1]]);
        }
        return r;
    }
};
