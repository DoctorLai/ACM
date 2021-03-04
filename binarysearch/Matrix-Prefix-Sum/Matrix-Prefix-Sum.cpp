// https://helloacm.com/compute-the-matrix-prefix-sum/
// https://binarysearch.com/problems/Matrix-Prefix-Sum
// EASY, PREFIX SUM, MATH

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    if (matrix.empty()) return matrix;
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int r = 0; r < rows; ++ r) {
        for (int c = 1; c < cols; ++ c) {
            matrix[r][c] += matrix[r][c - 1];
        }
    }
    for (int r = 1; r < rows; ++ r) {
        for (int c = 0; c < cols; ++ c) {
            matrix[r][c] += matrix[r - 1][c];
        }
    }
    return matrix;
}
