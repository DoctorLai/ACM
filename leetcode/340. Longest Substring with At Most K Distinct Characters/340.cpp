// https://helloacm.com/two-pointer-with-sliding-window-algorithm-to-compute-the-longest-substring-with-at-most-k-distinct-characters/
// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/
// HARD, SLIDING WINDOW, TWO POINTER

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int n = s.size();
        if (n == 0 || k == 0) return 0;
        int left = 0;
        unordered_map<char, int> data;
        int maxLen = 1;
        for (int i = 0; i < n; ++ i) {
            data[s[i]] ++;
            if (data.size() <= k) {
                maxLen = max(maxLen, i - left + 1);
            }
            while (data.size() > k) {
                if (--data[s[left]] == 0) {
                    data.erase(s[left]);
                }
                left ++;                
            }
        }        
        return maxLen;
    }
};
