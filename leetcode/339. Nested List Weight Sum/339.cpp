// https://helloacm.com/how-to-compute-nested-list-weight-sum-of-any-arrays/
// https://leetcode.com/problems/nested-list-weight-sum/

class Solution {
public:
    int depthSum(vector<NestedInteger>& nestedList) {
        return helper(nestedList, 1);
    }
    
    int helper(vector<NestedInteger>& nestedList, int depth) {
        int r = 0;
        for (const auto &n: nestedList) {
            if (n.isInteger()) {
                r += n.getInteger() * depth;
            } else {
                r += helper((vector<NestedInteger> &)n.getList(), depth + 1); // depth first search - recursion
            }
        }
        return r;        
    }
};
