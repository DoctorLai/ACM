// https://helloacm.com/how-to-find-common-characters-in-an-array-of-strings/
// https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int count[100][26] = { 0 };
        for (int i = 0; i < A.size(); ++ i) {
            for (const auto &ch: A[i]) {
                // occurence of character in each string
                count[i][ch - 97] ++;
            }
        }
        vector<string> result;
        for (int i = 0; i < 26; ++ i) {
            int k = INT_MAX;
            for (int j = 0; j < A.size(); j ++) {
                if (count[j][i] == 0) {
                    k = -1; // doesn't appear in every string
                    break;
                }
                k = min(k, count[j][i]); // the minimal number of the letter
            }
            while (k -- > 0) {
                result.push_back(std::string(1, (char)(97 + i)));
            }
        }
        return result;
    }
};
