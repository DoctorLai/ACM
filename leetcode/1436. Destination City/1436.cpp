// https://helloacm.com/finding-the-root-of-a-tree-finding-the-common-destination/
// https://leetcode.com/problems/destination-city/
// EASY, TREE

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> cities;
        for (const auto &n: paths) {
            cities.insert(n[0]);
            cities.insert(n[1]);
        }
        for (const auto &n: paths) {
            cities.erase(n[0]);
        }
        return *begin(cities);
    }
};
