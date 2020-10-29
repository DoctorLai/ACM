// https://helloacm.com/c-currency-number-format-function/
// https://binarysearch.com/problems/Penny-for-Your-Thoughts
// EASY, STRING

string solve(int n) {
    auto pad = [](int v, int d) {
        string ans = std::to_string(v);
        if (ans.size() < d) {
            ans = string(d - (int)ans.size(), '0') + ans;
        }
        return ans;
    };
    int cents = n % 100;
    n /= 100;
    vector<int> groups;
    while (n > 0) {
        groups.insert(begin(groups), n % 1000);
        n /= 1000;
    }
    string ans = "";
    if (!groups.empty()) {
        ans += std::to_string(groups[0]);
        if (groups.size() > 1) {
            ans += ",";
            for (int i = 1; i + 1 < groups.size(); ++ i) {
                ans += pad(groups[i], 3) + ",";
            }              
            ans += pad(groups.back(), 3);
        }
    } else {
        ans += "0";
    }
    ans += ".";
    ans += pad(cents, 2);
    return ans;
}
