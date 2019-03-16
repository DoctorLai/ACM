// https://helloacm.com/the-algorithm-to-find-anagram-mappings-between-two-arrays/
// https://leetcode.com/problems/find-anagram-mappings/

class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        unordered_map<int, vector<int>> table;
        for (int i = 0; i < B.size(); ++ i) {
            if (table.find(B[i]) == table.end()) {
                table[B[i]] = {i};
            } else {
                table[B[i]].push_back(i); // add duplicate index
            }
        }
        vector<int> r;
        for (int i = 0; i < A.size(); ++ i) {
            r.push_back(table[A[i]].back());  // pick a mapping index
            table[A[i]].pop_back();  // remove it from the queue
        }
        return r;
    }
};
