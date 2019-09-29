// https://helloacm.com/algorithms-to-determine-unique-number-of-occurrences/
// https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> data;
        for (const auto &n: arr) {
            data[n] ++;
        }
        unordered_set<int> hash;
        for (auto it = data.begin(); it != data.end(); it ++) {
            if (hash.count(it->second)) {
                return false;
            }
            hash.insert(it->second);
        }
        return true;
    }
};
