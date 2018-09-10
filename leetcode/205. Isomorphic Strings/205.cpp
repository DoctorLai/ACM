// https://helloacm.com/how-to-check-if-two-strings-are-isomorphic/
// https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, char> data;
        unordered_set<char> data2;
        for (int i = 0; i < s.size(); ++ i) {
            if (data.find(s[i]) == data.end()) {
                if (data2.count(t[i])) { // no two characters may map to the same character.
                    return false;
                }
                data[s[i]] = t[i];
                data2.insert(t[i]);
            }
            if (data[s[i]] != t[i]) return false;
        }
        return true;
    }
};
