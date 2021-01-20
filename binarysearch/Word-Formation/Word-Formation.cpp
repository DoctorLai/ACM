// https://helloacm.com/word-formation-algorithm-using-hash-map/
// https://binarysearch.com/problems/Word-Formation
// EASY, HASH TABLE

int solve(vector<string>& words, string letters) {
    unordered_map<char, int> count;        
    for (auto &n: letters) {
        count[n] ++;
    }
    function<bool(string &)> check = [&](string &a) {
        auto data = count;
        for (auto &n: a) {
            if (data[n] -- == 0) return false;
        }
        return true;
    };
    int ans = 0;
    for (auto &n: words) {
        if (check(n)) {
            ans = max(ans, (int)n.size());
        }
    }
    return ans;
}
