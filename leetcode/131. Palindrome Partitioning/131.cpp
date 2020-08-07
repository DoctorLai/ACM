// https://helloacm.com/how-to-partition-a-string-into-palindromes-using-dfs-algorithm/
// https://leetcode.com/problems/palindrome-partitioning/
// MEDIUM, DFS

class Solution {
public:
    vector<vector<string>> partition(string s) {
        dfs(s, {});
        return ans;
    }
    
private:
    vector<vector<string>> ans;
    void dfs(const string &s, vector<string> cur) {
        if (s.empty()) {
            ans.push_back(cur);
            return;
        }
        for (int i = 0; i < s.size(); ++ i) {
            string first = s.substr(0, i + 1);
            if (isPalindrome(first)) {
                cur.push_back(first);
                dfs(s.substr(i + 1), cur);
                cur.pop_back();
            }
        }
    }
    
    bool isPalindrome(const string &s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) return false;            
            i ++;
            j --;
        }
        return true;
    }
};
