// https://helloacm.com/algorithm-to-valid-n-queens/
// https://binarysearch.com/problems/Valid-N-Queens
// MEDIUM, HASH TABLE

bool solve(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return true;
    int cols = matrix[0].size();
    if (cols == 0) return true;
    unordered_set<int> rr, cc, dd, rd;
    for (int r = 0; r < rows; ++ r) {
        for (int c = 0; c < cols; ++ c) {
            if (!matrix[r][c]) continue;
            rr.insert(r);
            cc.insert(c);
            dd.insert(r - c);
            rd.insert(r + c);
        }
    }
    return (rr.size() == cc.size()) && (cc.size() == dd.size()) && 
           (dd.size() == rd.size()) && (dd.size() == rows);
}
