// https://helloacm.com/algorithm-to-compute-the-maximum-population-year/
// https://leetcode.com/problems/maximum-population-year/
// EASY, LINE SWEEP

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int, int> data;
        for (auto &n: logs) {
            data[n[0]] ++;
            data[n[1]] --;
        }
        int year;
        int maxPop = INT_MIN;
        int pop = 0;
        for (auto &[a, b]: data) {
            pop += b;
            if (maxPop < pop) {
                year = a;
                maxPop = pop;
            }
        }
        return year;
    }
};
