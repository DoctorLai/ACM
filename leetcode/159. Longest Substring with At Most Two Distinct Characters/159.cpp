// https://helloacm.com/two-pointer-sliding-window-to-compute-the-longest-substring-with-at-most-two-distinct-characters/
// https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/
// MEDIUM, SLIDING WINDOW, TWO POINTER, HASH MAP

class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map<char, int> window;
        int left = 0, right = 0;
        int ans = 0;
        while (right < s.size()) {
            window[s[right]] ++;       
            while ((left <= right) && (window.size() &t; 2)) {
                if (-- window[s[left]] == 0) {
                    window.erase(s[left]);
                }
                left ++;
            }                      
            ans = max(ans, right - left + 1);
            right ++;
        }
        return ans;
    }
};
