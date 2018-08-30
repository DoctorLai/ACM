// https://helloacm.com/c-coding-exercise-subdomain-visit-count/
// https://leetcode.com/problems/subdomain-visit-count/

#include <boost/algorithm/string.hpp>

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> count;
        for (const auto &s: cpdomains) {
            vector<string> str;
            boost::split(str, s, boost::is_any_of(" "));
            int num = atoi(str[0].c_str());
            auto domain = str[1];
            auto i = -1;
            do {
                auto cur = domain.substr(i + 1); // get next sub domain
                if (count.find(cur) != count.end()) { // first time in hash table?
                    count[cur] += num;
                } else {
                    count[cur] = num;
                }
                i = domain.find('.', i + 1) ; // jump to next dot
            } while (i != string::npos);  // reach end?
        }
        vector<string> r;
        // iterate the hash table for all key-value pairs
        for (auto iter = count.begin(); iter != count.end(); ++ iter) { 
            r.push_back(std::to_string(iter->second) + " " + iter->first);
        }
        return r;
    }
};
