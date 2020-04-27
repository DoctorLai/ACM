// https://helloacm.com/greedy-algorithm-to-reach-the-last-index-of-the-array/
// https://leetcode.com/problems/jump-game/
// MEDIUM, GREEDY

class Solution {
public:
    bool canJump(vector<int> A) {
        int i = 0; // current position
        for (int reach = 0; i < A.size() && i <= reach; ++i)
            reach = max(i + A[i], reach); // update max reach
        return i == A.size();  
    }
};
