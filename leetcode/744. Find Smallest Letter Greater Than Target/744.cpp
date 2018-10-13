// https://helloacm.com/how-to-find-smallest-letter-greater-than-target/
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (const auto &n: letters) {
            if (n > target) {
                return n;
            }
        }
        return letters[0];
    }
};

