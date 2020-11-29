// https://helloacm.com/algorithm-to-determine-a-latin-square-using-a-hash-table/
// https://binarysearch.com/problems/Latin-Square
// EASY, MATH, HASH TABLE

bool solve(vector<vector<string>>& matrix) {
    int rows = matrix.size();
    if (0 == rows) return 0;
    int cols = matrix[0].size();
    vector<unordered_set<char>> r(rows);
    vector<unordered_set<char>> c(cols);
    unordered_set<char> all;
    for (int i = 0; i < rows; ++ i) {
        for (int j = 0; j < cols; ++ j) {
            r[i].insert(matrix[i][j][0]);
            c[j].insert(matrix[i][j][0]);
            all.insert(matrix[i][j][0]);
        }
    }
    for (int i = 0; i < rows; ++ i) {
        if (r[i].size() != rows) {
            return false;
        }
    }
    for (int i = 0; i < cols; ++ i) {
        if (c[i].size() != cols) {
            return false;
        }
    }
    return all.size() == rows;
}
