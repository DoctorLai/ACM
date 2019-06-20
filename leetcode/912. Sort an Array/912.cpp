// https://helloacm.com/the-recursive-quicksort-implementation-in-c/
// https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return {};
        vector<int> lt;
        vector<int> eq;
        vector<int> gt;
        int p = nums[rand() % nums.size()];
        for (const auto &n: nums) {
            if (n < p) lt.push_back(n);
            else if (n == p) eq.push_back(n);
            else gt.push_back(n);
        }
        vector<int> lt1 = sortArray(lt);
        vector<int> gt1 = sortArray(gt);
        lt1.insert(end(lt1), begin(eq), end(eq));
        lt1.insert(end(lt1), begin(gt1), end(gt1));
        return lt1;
    }
};
