// https://helloacm.com/how-to-find-smallest-letter-greater-than-target/
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool data[26] = { false };
        for (const auto &n: letters) {
            data[n - 97] = true;
        }
        target -= 97;        
        do {
            target = (target + 1) % 26;    
        } while (!data[target]);
        return static_cast<char>(97 + target);
    }
};
