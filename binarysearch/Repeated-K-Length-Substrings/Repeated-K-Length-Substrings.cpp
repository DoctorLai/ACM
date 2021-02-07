// https://helloacm.com/count-the-repeated-k-length-substrings/
// https://binarysearch.com/problems/Repeated-K-Length-Substrings
// EASY, STRING, HASH TABLE

int solve(string s, int k) {
    unordered_map<string, int> data;
    string cur = "";
    for (int i = 0; i < s.size(); ++ i) {
        cur += s[i];
        if (cur.size() > k) {
            cur = cur.substr(1);
        }
        data[cur] ++;
    }
    return count_if(begin(data), end(data), [](auto &x) { return x.second > 1;});
}
