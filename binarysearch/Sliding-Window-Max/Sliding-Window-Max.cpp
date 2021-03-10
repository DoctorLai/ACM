// https://helloacm.com/compute-the-sliding-window-max-using-monetone-decreasing-double-ended-queue/
// https://binarysearch.com/problems/Sliding-Window-Max
// HARD, QUEUE

vector<int> solve(vector<int>& nums, int k) {
    if (nums.empty()) return {};
    deque<int> dq;
    vector<int> ans;    
    for (int i = 0; i < nums.size(); ++ i) {
        while (!dq.empty() && (nums[dq.back()] < nums[i])) {
            dq.pop_back();
        }      
        dq.push_back(i);
        while (i - dq.front() + 1 > k) {
            dq.pop_front();
        }         
        if (i >= k - 1) {
            ans.push_back(nums[dq.front()]);
        }
    };
    return ans;
}
