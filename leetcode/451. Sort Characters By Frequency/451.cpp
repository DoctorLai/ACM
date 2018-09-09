// https://helloacm.com/how-to-sort-characters-by-frequency/
// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        int count[256] = {0};
        for (const auto &n: s) {
            count[n] ++; // count the frequency
        }
        vector<pair<int, int>> data;
        for (int i = 0; i < 256; ++ i) {
            if (count[i] > 0) {
                data.emplace_back(i, count[i]);
            }
        }
        sort(begin(data), end(data), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;  // sort it by frequency
        });
        string r = "";
        for (const auto &n: data) {
            for (int i = 0; i < n.second; ++ i) {
                r += string(1, (char)n.first);
            }
        }
        return r;
    }
};
