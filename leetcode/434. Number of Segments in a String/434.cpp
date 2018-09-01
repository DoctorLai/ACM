// https://helloacm.com/how-to-count-number-of-segments-in-a-string/
// https://leetcode.com/problems/number-of-segments-in-a-string/

class Solution {
public:
    int countSegments(string s) {
        auto cnt = 0;
        for (int i = 0; i < s.size(); ++ i) {
            if (((i == 0) || (s[i - 1] == ' ')) && (s[i] != ' ')) {
                cnt ++;
            }
        }
        return cnt;
    }
};
