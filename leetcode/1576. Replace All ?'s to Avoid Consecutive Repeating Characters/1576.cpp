// https://helloacm.com/algorithm-to-replace-all-s-to-avoid-consecutive-repeating-characters/
// https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/submissions/
// EASY, STRING

class Solution {
public:
    string modifyString(string s) {
        for (int i = 0; i + 1 < s.size(); ++ i) {
            if (s[i] == '?') {
                s[i] = diff(i > 0 ? s[i - 1] : ' ', s[i + 1]);
            } 
        }    
        if (s.back() == '?') {
            s.back() = diff(s.size() > 1 ? s[s.size() - 2] : ' ', ' ');
        } 
        return s;
    }
private:
    char diff(char a, char b) {
        for (auto ans = 'a'; ans <= 'z'; ++ ans) {
            if ((ans != a) && (ans != b)) {
                return ans;
            }
        }
        return ' ';
    }
};
