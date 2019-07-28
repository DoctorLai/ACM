// https://helloacm.com/the-intersection-algorithm-of-two-arrays-using-hash-maps-in-c-java-javascript/
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        if (n1 == 0 || n2 == 0) return {};
        vector<int> r;
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                r.push_back(nums1[i]);
                i ++;
                j ++;
            } else if (nums1[i] < nums2[j]) {
                i ++;
            } else {
                j ++;
            }
        }
        return r;
    }
};
