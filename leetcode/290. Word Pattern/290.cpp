// https://helloacm.com/algorithm-to-check-if-a-string-matches-a-pattern/
// https://leetcode.com/problems/word-pattern/
// EASY, HASH MAP

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream ss(str);
        string word;
        unordered_map<char, string> mapping;
        unordered_map<string, char> words;
        int i = 0;
        while (ss >> word) {
            if (i >= pattern.size()) {
                return false;
            }
            char pat = pattern[i ++];            
            if (mapping.find(pat) != mapping.end()) {
                if (word != mapping[pat]) {
                    return false;
                }
            }
            if ((words.find(word) != words.end()) && (words[word] != pat)) {
                return false;
            }
            words[word] = pat;            
            mapping[pat] = word;
        }
        return i == pattern.size();
    }
};
