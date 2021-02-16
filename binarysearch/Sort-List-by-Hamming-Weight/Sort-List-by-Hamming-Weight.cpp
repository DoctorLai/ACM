// https://helloacm.com/how-to-sort-list-by-hamming-weight-in-c/
// https://binarysearch.com/problems/Sort-List-by-Hamming-Weight
// EASY, MATH

vector<int> solve(vector<int>& nums) {    
    sort(begin(nums), end(nums), [&](auto &a, auto &b) {
        auto aa = __builtin_popcount(a);
        auto bb = __builtin_popcount(b);
        return (aa < bb) || (aa == bb) && (a < b);
    });
    return nums;
}
