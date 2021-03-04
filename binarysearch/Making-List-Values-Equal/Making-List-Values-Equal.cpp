// https://helloacm.com/algorithms-to-make-list-values-equal/
// https://binarysearch.com/problems/Making-List-Values-Equal
// EASY, MATH

int solve(vector<int>& nums) {
    auto minmax = minmax_element(begin(nums), end(nums));
    return *minmax.second - *minmax.first;
}
