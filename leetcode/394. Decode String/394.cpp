// https://helloacm.com/algorithm-to-decode-run-length-compression-string/
// https://leetcode.com/problems/decode-string/

class Solution {
public:
    string decodeString(string s) {
        string res = "";
        for (const auto &c: s) {
            if (c != ']') {
                res.push_back(c);
                continue;
            }
            int idx = res.find_last_of('[');
            string sub = res.substr(idx + 1);
            int i = idx - 1;
            while ((i >= 0) && (isdigit(res[i]))) {
                i --;
            }
            int count = std::stoi(res.substr(i + 1, idx - i));
            res = res.substr(0, i + 1);
            while (count -- > 0) {
                res += sub;
            }
        }
        return res;        
    }
};
