// https://helloacm.com/the-algorithm-to-find-anagram-mappings-between-two-arrays/
// https://leetcode.com/problems/find-anagram-mappings/

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> table;
        for (int i = 0; i < B.size(); ++ i) {
            table[B[i]] = {i};
        }
        vector<int> r;
        for (int i = 0; i < A.size(); ++ i) {
            r.push_back(table[A[i]]);
        }
        return r;
    }
};
