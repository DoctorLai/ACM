// https://helloacm.com/algorithms-to-compute-the-largest-time-for-given-digits/
// https://leetcode.com/problems/largest-time-for-given-digits/
// EASY, PERMUTATION

class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(begin(A), end(A));
        string ans = getTime(A);        
        while (next_permutation(begin(A), end(A))) {
            auto time = getTime(A);
            ans = max(ans, time);
        }
        return ans;
    }
private:
    string getTime(vector<int>& A) {
        int hour = A[0] * 10 + A[1];
        int minute = A[2] * 10 + A[3];
        if ((hour > 23) || (minute >= 60)) return "";        
        return std::to_string(A[0]) + 
            std::to_string(A[1]) + ":" + 
            std::to_string(A[2]) + 
            std::to_string(A[3]);
    }
};
