// https://helloacm.com/how-to-search-in-2d-sorted-matrix/
// https://leetcode.com/problems/search-a-2d-matrix/

lass Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto rows = matrix.size();
        if (rows == 0) return false;
        auto cols = matrix[0].size();
        if (cols == 0) return false;
        int i = 0;
        int j = rows - 1;
        int mid;
        // find target row
        if (rows > 1) {
            while (i <= j) {
                mid = i + (j - i) / 2;
                if (target == matrix[mid][cols - 1]) {
                    return true;
                }
                if (target > matrix[mid][cols - 1]) {
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
            }
            // comparing to the last element in the row    
            rows = target > matrix[mid][cols - 1] ? mid + 1 : mid;        
        } else {
            rows = 0;            
        }
        if (rows >= matrix.size()) return false;
        i = 0;
        j = cols - 1;
        // binary search to find the target in the target row
        while (i <= j) {
            mid = i + (j - i) / 2;
            if (target == matrix[rows][mid]) {
                return true;
            }
            if (target > matrix[rows][mid]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return false;
    }
};
