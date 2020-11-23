// https://helloacm.com/how-to-check-if-a-matrix-is-a-toeplitz-matrix/
// https://binarysearch.com/problems/Toeplitz-Matrix
// EASY, MATH

bool solve(vector<vector<int>>& matrix) {
    if (matrix.empty()) return true;
    function<bool(int, int)> checkDiag = [&](int r, int c) {
        int v = matrix[r][c];
        while (r < matrix.size() && c < matrix[0].size()) {
            if (matrix[r][c] != v) return false;
            r ++;
            c ++;
        }
        return true;
    };
    for (int r = 0; r < matrix.size(); ++ r) {
        if (!checkDiag(r, 0)) return false;
    }
    for (int c = 0; c < matrix[0].size(); ++ c) {
        if (!checkDiag(0, c)) return false;
    }
    return true;
}
