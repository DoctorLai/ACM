// https://helloacm.com/how-to-find-the-most-common-word-in-a-string-with-a-banned-list/
// https://leetcode.com/problems/most-common-word/

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int i = 0;
        int len = paragraph.size();
        unordered_set<string> words(begin(banned), end(banned));
        unordered_map<string, int> count;
        while (i < len) {
            while ((i < len) && !isalpha(paragraph[i])) i ++;
            int j = i;
            while ((j < len) && isalpha(paragraph[j])) j ++;
            string cur = (paragraph.substr(i, j - i));
            std::transform(begin(cur), end(cur), begin(cur), [](auto c) {
                return std::tolower(c);
            });
            i = j + 1;
            if (words.count(cur)) continue;
            count[cur] ++;
        }
        auto ele = max_element(begin(count), end(count), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        return ele->first;
    }
};
