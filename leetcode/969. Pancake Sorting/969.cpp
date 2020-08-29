// https://helloacm.com/introducing-the-pancake-sorting-algorithm/
// https://leetcode.com/problems/pancake-sorting/
// MEDIUM, ARRAY

class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> res;
        int k = A.size();
        while (k > 0) {
            auto it = std::max_element(begin(A), begin(A) + k);
            int maxIndex = it - begin(A) + 1;
            // make max to the begining
            res.push_back(maxIndex);
            std::reverse(begin(A), it + 1);
            // make max to the end
            res.push_back(k);
            std::reverse(begin(A), begin(A) + k);
            k --;
        }
        return res;
    }
};
