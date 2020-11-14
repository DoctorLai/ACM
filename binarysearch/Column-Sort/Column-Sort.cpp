// https://helloacm.com/algorithm-to-sort-the-columns-of-a-matrix-using-transpose/
// https://binarysearch.com/problems/Column-Sort
// EASY, MATRIX, SORT

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    function<void(vector<vector<int>> &m)> transpose = [](vector<vector<int>> &m) {
        vector<vector<int>> n(m[0].size(), vector<int>(m.size()));
        for (int r = 0; r < m.size(); ++ r) {
            for (int c = 0; c < m[0].size(); ++ c) {
                n[c][r] = m[r][c];
            }
        }
        m = n;
    };
    transpose(matrix);
    for (int r = 0; r < matrix.size(); ++ r) {
        sort(begin(matrix[r]), end(matrix[r]));
    }
    transpose(matrix);
    return matrix;
}
