// https://helloacm.com/backpacking-problem-variation-via-greedy-approach-how-many-apples-can-you-put-into-the-basket/
// https://leetcode.com/problems/how-many-apples-can-you-put-into-the-basket/

class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        sort(begin(arr), end(arr));
        for (int i = 0, res = 0; i < arr.size(); ++ i) {
            if (res + arr[i] <= 5000) {
                res += arr[i];
            } else {
                return i;
            }
        }
        return arr.size();
    }
};
