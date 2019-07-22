// https://helloacm.com/the-24-game-algorithm-using-depth-first-search/
// https://leetcode.com/problems/24-game/

class Solution {
public:
    bool judgePoint24(vector<int>& nums) {
        vector<double> arr;
        for (const auto &n: nums) {
            arr.push_back(n);
        }
        return search(arr);
    }
    
private:
    bool search(vector<double>& nums) {
        if (nums.empty()) return false;
        if (nums.size() == 1) return abs(nums[0] - 24) < 1e-6;        
        for (int i = 0; i < nums.size(); ++ i) {
            for (int j = 0; j < nums.size(); ++ j) {
                if (i == j) continue;
                vector<double> nums2;
                for (int k = 0; k < nums.size(); ++ k) {
                    if (k != i && k != j) {
                        nums2.push_back(nums[k]);
                    }
                }
                for (int k = 0; k < 4; ++ k) {
                    if ((k < 2) && (j > i)) continue; // ignoring communitive additions and multiplication
                    switch (k) {
                        case 0: nums2.push_back(nums[i] + nums[j]); break;
                        case 1: nums2.push_back(nums[i] * nums[j]); break;
                        case 2: nums2.push_back(nums[i] - nums[j]); break;
                        case 3: 
                            if (nums[j] != 0) {
                                nums2.push_back(nums[i] / nums[j]); 
                            } else {
                                continue;    
                            }
                            break;                            
                    }
                    if (search(nums2)) return true;
                    nums2.pop_back();                    
                }
            }
        }
        return false;
    }
};
