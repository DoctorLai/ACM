// https://helloacm.com/finding-the-second-largest-digit-in-a-string/
// https://leetcode.com/problems/second-largest-digit-in-a-string
// EASY, STRING, HASH MAP

class Solution {
public:
    int secondHighest(string s) {
        set<int> data;
        for (auto &n: s) {
            if (isdigit(n)) {
                data.insert(n - 48);
            }
        }
        if (data.size() <= 1) return -1;
        return *prev(prev(end(data)));
    }
};
