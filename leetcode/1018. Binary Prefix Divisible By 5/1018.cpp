// https://helloacm.com/binary-prefix-divisible-by-5-java-c-coding-exercise/
// https://leetcode.com/problems/binary-prefix-divisible-by-5/

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> result;
        int x = 0;
        for (const auto y: A) {
            x = ((x << 1) + y) % 5;
            result.push_back(x % 5 == 0);
        }
        return result;
    }
};
