// https://helloacm.com/how-to-find-top-k-frequent-elements-via-priority-queue-or-sorting/
// https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (const auto &n: nums) { // count frequencies and store them in hash table
            if (count.find(n) == count.end()) {
                count[n] = 1;
            } else {
                count[n] ++;
            }            
        }
        sort(nums.begin(), nums.end(), [&count](int a, int b) {
            return count[a] > count[b];  // sort by frequency
        });
        vector<int> r; // result vector
        int c = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (std::find(r.begin(), r.end(), nums[i]) == r.end()) { // remove duplicates
                r.push_back(nums[i]);
                c ++;
                if (c >= k) break;  // Top K frequent elements found
            }
        }
        return r;
    }
};
