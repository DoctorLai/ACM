// https://helloacm.com/the-unique-morse-code-words-algorithm/
// https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseTable = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> outcome;
        for (const auto &s: words) {
            string r = "";
            for (const auto &c: s) {
                r += morseTable[c - 97];
            }
            outcome.insert(r);
        }
        return outcome.size();
    }
};
