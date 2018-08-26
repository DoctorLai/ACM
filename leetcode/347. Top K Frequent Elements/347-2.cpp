// https://helloacm.com/how-to-find-top-k-frequent-elements-via-priority-queue-or-sorting/
// https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; // hash table to count frequencies
        for (const auto &n: nums) {
            if (count.find(n) == count.end()) { // update the frequencies
                count[n] = 1;
            } else {
                count[n] ++;
            }            
        }
        // lambda function to compare according to frequencies
        auto cmp = [&count](int a, int b) { return count[a] < count[b]; };
        priority_queue<int, vector<int>, decltype(cmp)> q(cmp);
        unordered_set<int> flag;
        for (const auto &n: nums) {
            if (!flag.count(n)) { // push only unique integers to queue
                q.push(n);
                flag.insert(n);
            }
        }
        vector<int> r;
        for (int i = 0; i < k; ++ i) {
            auto p = q.top(); // pop K frequent numbers from the priority queue
            q.pop();
            r.push_back(p);
        }
        return r;
    }
};
