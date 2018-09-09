// https://helloacm.com/how-to-sort-characters-by-frequency/
// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        int count[256] = {0};
        for (const auto &n: s) {
            count[n] ++;
        }
        auto cmp = [](pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;  // the most common character pops first
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
        for (int i = 0; i < 256; ++ i) {
            if (count[i] > 0) {
                q.emplace(i, count[i]); // push the pair to the priority queue
            }
        }
        string r = "";
        while (!q.empty()) { // pop every elements in priority queue in turn
            auto n = q.top();
            q.pop();
            for (int i = 0; i < n.second; ++ i) {
                r += string(1, (char)n.first);
            }
        }
        return r;
    }
};
