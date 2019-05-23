// https://helloacm.com/algorithm-of-two-pointer-sliding-windows-to-find-all-anagrams-in-a-string/
// https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.size() > s.size()) return {};
        int freq1[26] = { 0 };
        int freq2[26] = { 0 };
        for (int i = 0; i < p.size(); ++ i) {
            char n = s[i];
            freq1[n - 'a'] ++;
        }
        for (const auto &n: p) {
            freq2[n - 'a'] ++;
        }
        vector<int> r;                
        if (equal(freq1, freq2)) { // anagrams at index 0
            r.push_back(0);
        }
        for (int i = p.size(); i < s.size(); ++ i) {
            freq1[s[i] - 'a'] ++; // new character
            freq1[s[i - p.size()] - 'a'] --; // remove the first character
            if (equal(freq1, freq2)) {
                r.push_back(i - p.size() + 1);
            }
        }
        return r;
    }
 
    // O(1) to check if two frequency table matches.    
    bool equal(int *freq1, int *freq2) {
        for (int i = 0; i < 26; ++ i) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
};
