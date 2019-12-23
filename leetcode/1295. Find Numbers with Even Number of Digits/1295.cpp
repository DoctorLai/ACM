// https://helloacm.com/find-numbers-with-even-number-of-digits-using-the-reduce-function-in-javascript-c-and-python/
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// EASY, ARRAY

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return std::accumulate(begin(nums), end(nums), 0, [](auto &s, auto &n) {
            return s + 1 - std::to_string(n).size() % 2;
        });
    }
};
