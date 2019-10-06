// https://helloacm.com/intersection-of-three-sorted-arrays-using-three-pointers/
// https://leetcode.com/problems/intersection-of-three-sorted-arrays/

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> res;
        int i = 0, j = 0, k = 0;
        int s1 = arr1.size(), s2 = arr2.size(), s3 = arr3.size();
        while ((i < s1) && (j < s2) && (k < s3)) {
            if ((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])) {
                res.push_back(arr1[i]);
                i ++; j ++; k ++; continue;
            }
            if (arr1[i] < arr2[j]) {
                i ++;
            } else if (arr2[j] < arr3[k]) {
                j ++;
            } else {
                k ++;
            }
        }
        return res;
    }
};
