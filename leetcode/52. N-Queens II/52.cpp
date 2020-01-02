// https://helloacm.com/using-recursive-backtracking-algorithm-to-solve-classic-n-queen-problem/
// HARD, DFS, BACKTRACKING, RECURSION

class Solution {
public:
    int totalNQueens(int n) {
        int r = 0;
        dfs({}, n, r);
        return r;
    }
private:
    void dfs(vector<int> cur, int n, int &r) {
        if (cur.size() == n) {
            ++ r;
            return;
        }
        for (int i = 0; i < n; ++ i) {
            if (validQueenPosition(cur, i)) {
                cur.push_back(i);
                dfs(cur, n, r);
                cur.pop_back();
            }
        }
    }
    
    bool validQueenPosition(vector<int> cur, int x) {
        for (int i = 0; i < cur.size(); ++ i) {
            // on the same diag 
            if (abs(i - (int)cur.size()) == abs(x - cur[i])) {
                return false;
            }
            // on the same column
            if (x == cur[i]) return false;
        }
        return true;
    }    
};
