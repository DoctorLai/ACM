// https://helloacm.com/a-simple-html-entity-parser-in-c/
// https://leetcode.com/problems/html-entity-parser/
// MEDIUM, STRING

class Solution {
public:
    string entityParser(string text) {
        unordered_map<string, string> convert({
            {"&quot;", "\""},
            {"&apos;", "'"},
            {"&amp;", "&"},
            {"&gt;", ">"},
            {"&lt;", "<"},
            {"&frasl;", "/"}
        });
        string res = "";
        for (int i = 0; i < text.size(); ++ i) {
            bool flag = false;
            for (auto it = begin(convert); it != end(convert); ++ it) {
                string key = it->first;
                string value = it->second;
                if (i + key.size() - 1 < text.size()) {
                    if (text.substr(i, key.size()) == key)    {
                        res += value;
                        i += key.size() - 1;
                        flag = true;
                        break;
                    }
                }                 
            }
            if (!flag) {
                res += text[i];
            }
        }
        return res;
    }
};
