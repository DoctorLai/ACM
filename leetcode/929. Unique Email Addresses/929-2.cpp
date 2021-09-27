// https://helloacm.com/how-to-filter-the-unique-email-addresses/
// https://leetcode.com/problems/unique-email-addresses/
// MEDIUM, HASH MAP

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> data;
        for (const auto &n: emails) {
            int p = n.find('@');
            string x = "";
            for (auto i = 0; i < p; ++ i) {
                if (n[i] == '+') {
                    break;
                }
                if (n[i] != '.') {
                    x.append(std::to_string(n[i]));
                }
            }
            data.insert(x + '@' + n.substr(p));
        }
        return data.size();
    }
};
