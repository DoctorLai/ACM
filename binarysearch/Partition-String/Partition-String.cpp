// https://helloacm.com/two-pointer-partition-string-to-most-unique-substrings/
// https://binarysearch.com/problems/Partition-String
// HARD, STRING, TWO POINTER

vector<int> solve(string s) {
    int right[26] = {};
    for (int i = 0; i < s.size(); ++ i) {
        right[s[i] - 97] = i;
    }
    vector<int> res;
    int i = 0;
    while (i < s.size()) {
        int curMax = right[s[i] - 97];
        int j = i;
        while (j < curMax) {
            j ++;
            curMax = max(curMax, right[s[j] - 97]);
        }
        res.push_back(curMax - i + 1);
        i = curMax + 1;
    }
    return res;
}
