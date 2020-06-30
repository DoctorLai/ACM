// https://helloacm.com/function-to-compute-the-average-salary-excluding-the-minimum-and-maximum-salary/
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
// EASY

class Solution {
public:
    double average(vector<int>& salary) {
        auto x = minmax_element(begin(salary), end(salary));
        double sum = std::accumulate(begin(salary), end(salary), 0, [](auto &a, auto &b) {
            return a + b;
        });
        return (sum - *x.first - *x.second) / (salary.size() - 2);
    }
};
