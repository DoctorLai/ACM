// https://helloacm.com/depth-first-search-to-compute-the-permutation-with-duplicates-letter-tile-possibilities/
// https://leetcode.com/problems/letter-tile-possibilities/

class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_set<string> r;
        dfs(r, tiles, "", tiles.size());
        return r.size();
    }
    
private:
    void dfs(unordered_set<string> &result, string tiles, string cur, int n) {        
        if (cur.size() <= n && cur != "") {
            result.insert(cur);
        }
        for (int i = 0; i < tiles.size(); ++ i) {
            dfs(result, tiles.substr(0, i) + tiles.substr(i + 1), cur + tiles[i], n);
        }
    }
};
