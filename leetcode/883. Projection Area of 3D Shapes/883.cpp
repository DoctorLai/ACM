// https://helloacm.com/how-to-compute-the-projection-area-of-3d-shapes/
// https://leetcode.com/problems/projection-area-of-3d-shapes/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        unordered_map<int, int> columns;
        for (int i = 0; i < grid.size(); ++ i) {
            int rowMax = 0;
            for (int j = 0; j < grid[i].size(); ++ j) {
                if (grid[i][j] != 0) ans ++; // xy                
                rowMax = max(grid[i][j], rowMax);
                if (columns.find(j) == columns.end()) {
                    columns[j] = grid[i][j];
                } else {
                    columns[j] = max(columns[j], grid[i][j]);
                }
            }
            ans += rowMax;  // yz
        }        
        for (auto &it: columns) {
            ans += it.second; // xz
        }
        return ans;
    }
};
