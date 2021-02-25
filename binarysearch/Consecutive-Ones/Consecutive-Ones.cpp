// https://helloacm.com/consecutive-ones-algorithm/
// https://binarysearch.com/problems/Consecutive-Ones
// EASY, ARRAY

bool solve(vector<int>& nums) {
    bool meetOne = false;
    bool space = false;
    for (int i = 0; i < nums.size(); ++ i) {
        if (nums[i] == 1) {
            if (space) return false;
            meetOne = true;
        } else {
            if (meetOne) {
                space = true;
            }
        }
    }
    return true;
}
