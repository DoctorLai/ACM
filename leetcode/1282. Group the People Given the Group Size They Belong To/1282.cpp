// https://helloacm.com/greedy-algorithm-to-group-the-numbers-items-given-the-group-size-they-belong-to/
// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
// MEDIUM, GREEDY ALGORITHM, HASH MAP

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int, vector<int>> ids;
        for (int i = 0; i < groupSizes.size(); ++ i) {
            ids[groupSizes[i]].push_back(i);
        }
        for (auto it = rbegin(ids); it != ids.rend(); ) {
            if (ans.empty() || (ans.back().size() >= it->first)) {
                ans.push_back({}); // need a new group
            }
            ans.back().push_back(it->second.back());
            it->second.pop_back();  // remove the ID from the candidate list
            if (it->second.empty()) {
                ++ it;
            }
        }
        return ans;
    }
};
