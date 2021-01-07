// https://helloacm.com/list-calculator-algorithm/
// https://binarysearch.com/problems/List-Calculator
// EASY, MATH

vector<int> solve(vector<int>& nums, string op, int val) {
    for (int i = 0; i < nums.size(); ++ i) {
        switch (op[0]) {
            case '+': nums[i] += val; break;
            case '-': nums[i] -= val; break;
            case '*': nums[i] *= val; break;
            case '/': nums[i] /= val; break;
        }
    }
    return nums;
}
