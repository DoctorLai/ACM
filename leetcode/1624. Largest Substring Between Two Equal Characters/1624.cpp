// https://helloacm.com/compute-the-largest-substring-between-two-equal-characters-using-hash-table/
// https://leetcode.com/problems/largest-substring-between-two-equal-characters/
// EASY, HASH MAP

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> data;
        int ans = -1;
        for (int i = 0; i < s.size(); ++ i) {
            if (data.count(s[i])) {
                ans = max(ans, i - data[s[i]] - 1);
            } else {
                data[s[i]] = i;
            }
        }
        return ans;
    }
};
