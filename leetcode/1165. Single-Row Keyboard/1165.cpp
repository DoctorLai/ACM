// https://helloacm.com/single-row-keyboard-algorithms-to-estimate-the-finger-moving-time/
// https://leetcode.com/problems/single-row-keyboard/submissions/

class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int data[26];
        for (int i = 0; i < keyboard.size(); ++ i) {
            data[keyboard[i] - 97] = i;
        }
        int r = data[word[0] - 97];
        for (int i = 1; i < word.size(); ++ i) {
            r += abs(data[word[i] - 97] - data[word[i - 1] - 97]);
        }
        return r;
    }
};
