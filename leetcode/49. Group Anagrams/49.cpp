// https://helloacm.com/algorithms-to-group-words-by-anagrams/
// https://leetcode.com/problems/group-anagrams/
// MEDIUM, SORTING

class Solution {
public:   
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> r;
        unordered_map<string, int> cached;
        for (string n: strs) {
            string t = n;
            sort(n.begin(), n.end());
            if (cached.find(n) != cached.end()) {
                int k = cached[n];
                r[k].push_back(t);
            } else {
                r.push_back({t});
                cached[n] = r.size() - 1;
            }
        }        
        return r;
    }
};
