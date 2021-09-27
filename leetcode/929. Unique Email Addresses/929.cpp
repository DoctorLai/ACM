// https://helloacm.com/how-to-filter-the-unique-email-addresses/
// https://leetcode.com/problems/unique-email-addresses/
// MEDIUM, HASH MAP

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> data;
        for (const auto &n: emails) {
            int p = n.find('@');
            auto x = n.substr(0, p);
            x.erase(std::remove(begin(x), end(x), '.'), end(x));
            auto y = x.find('+');
            if (y != string::npos) {
                x.erase(x.begin() + y, end(x));
            }
            data.insert(x + '@' + n.substr(p));
        }
        return data.size();
    }
};
