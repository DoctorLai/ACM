// https://helloacm.com/compute-longest-substring-with-at-least-k-repeating-characters-via-divide-and-conquer-algorithm/
// https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
// MEDIUM, DIVIDE-AND-CONQUER

class Solution {
    public:
    int longestSubstring(string s, int k) {
        unordered_map<char, int> freq;
        for (auto &n: s) {
            freq[n] ++;
        }
        for (auto &[a, b]: freq) {
            if (b < k) {
                int i = 0;
                while (i < s.size() && (s[i] != a)) i ++;
                return max(longestSubstring(s.substr(0, i), k), longestSubstring(s.substr(i + 1), k));
            }
        }
        return s.size();
    }
};
