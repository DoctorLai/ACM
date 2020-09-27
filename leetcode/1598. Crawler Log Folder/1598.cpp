// https://helloacm.com/min-number-of-operations-to-crawler-log-folder/
// https://leetcode.com/problems/crawler-log-folder/
// EASY, SIMULATION

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (const auto &n: logs) {
            if (n == "../") {
                depth = max(0, depth - 1);
            } else if (n != "./") depth ++;
        }        
        return depth;
    }
};
