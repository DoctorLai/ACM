// https://helloacm.com/the-intersection-algorithm-of-two-arrays-using-hash-maps-in-c-java-javascript/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/ 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> r;
        unordered_map<int, int> count;
        for (const auto &n: nums1) {
            if (count.find(n) == count.end()) {
                count[n] = 1;
            } else {
                count[n] ++;
            }
        }
        for (const auto &n: nums2) {
            if (count.find(n) != count.end()) {
                if (count[n] > 0) {
                    r.push_back(n);
                    count[n] --;
                }
            }
        }
        return r;
    }
};
