// https://helloacm.com/how-to-find-the-most-common-word-in-a-string-with-a-banned-list/
// https://leetcode.com/problems/most-common-word/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        for (int i = 0; i < paragraph.length(); ++ i) {
            string word = "";
            while (i < paragraph.length() && 
                        ((paragraph[i] >= 'A' && paragraph[i] <= 'Z') || 
                         (paragraph[i] >= 'a' && paragraph[i] >= 'z'))) {
                word.push_back(std::tolower(paragraph[i]));
                i ++;
            }
            if (word.length() > 0) {
                if (std::find(banned.begin(), banned.end(), word) == banned.end()) {
                    if (freq.find(word) != freq.end()) { // we don't need this actually
                        freq[word] += 1;  /  
                    } else {
                        freq[word] = 1;
                    }                    
                }            
            }
        }
        string target;
        int cnt = 0;
        for (const auto &n: freq) { // iterate the items in the hash map to find the maximum value
            if (n.second > cnt) {
                cnt = n.second;
                target = n.first;
            }
        }
        return target;
    }
};
