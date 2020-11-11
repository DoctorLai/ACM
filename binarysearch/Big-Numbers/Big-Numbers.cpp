// https://helloacm.com/counting-the-big-numbers-largests-in-its-row-and-column-in-a-matrix/
// https://binarysearch.com/problems/Big-Numbers
// EASY, MATH

int solve(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return 0;
    int cols = matrix[0].size();
    vector<int> rowMax(rows, 0);
    vector<int> colMax(cols, 0);
    int ans = 0;
    for (int r = 0; r < rows; ++ r) {
        for (int c = 0; c < cols; ++ c) {
            rowMax[r] = max(rowMax[r], matrix[r][c]);
            colMax[c] = max(colMax[c], matrix[r][c]);
        }
    }
    for (int r = 0; r < rows; ++ r) {
        for (int c = 0; c < cols; ++ c) {
            if (matrix[r][c] == rowMax[r] && matrix[r][c] == colMax[c]) {
                ans ++;
            }
        }
    }
    return ans;
}
