// https://helloacm.com/how-to-reorder-data-in-log-files-using-the-custom-sorting-algorithm/
// https://leetcode.com/problems/reorder-data-in-log-files/
// EASY, SORTING

class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        stable_sort(begin(logs), end(logs), [](auto &a, auto &b) {
            bool aa = isalpha(a.back());
            bool bb = isalpha(b.back());
            if (aa && bb) {
                int i = a.find(' ');
                int j = b.find(' ');
                string w1 = a.substr(i + 1);
                string w2 = b.substr(j + 1);
                string i1 = a.substr(0, i);
                string i2 = b.substr(0, j);
                return w1 == w2 ? i1 <= i2 : w1 < w2;
            }
            if (aa && (!bb)) {
                return true;                
            }
            return false;
        });
        return logs;
    }
};
