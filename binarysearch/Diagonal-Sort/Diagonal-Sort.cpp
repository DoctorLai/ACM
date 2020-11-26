// https://helloacm.com/diagonal-sorting-algorithm-in-a-matrix/
// https://binarysearch.com/problems/Diagonal-Sort
// MEDIUM, SORT

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    map<int, priority_queue<int, vector<int>, greater<int>>> m;
    int r = matrix.size();
    int c = matrix[0].size();

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            m[i - j].push(matrix[i][j]);
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            matrix[i][j] = m[i - j].top();
            m[i - j].pop();
        }
    }

    return matrix;
}
