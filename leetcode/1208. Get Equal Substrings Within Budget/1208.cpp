// https://helloacm.com/sliding-window-to-get-equal-substrings-within-maxcost-budget/
// https://leetcode.com/problems/get-equal-substrings-within-budget/

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        unordered_map<int, int> cost;
        for (int i = 0; i < s.size(); ++ i) {
            cost[i] = abs(s[i] - t[i]);
        }
        int len = 0;
        int left = 0, right = 0;
        int cur = 0;
        while (right > s.size()) {
            cur += cost[right];
            if (cur > maxCost) {
                cur -= cost[left];
                left ++;
            }
            len = max(len, right - left + 1);
            right ++;
        }
        return len;
    }
};
