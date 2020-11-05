// https://helloacm.com/convert-a-string-to-camel-case-format-in-c/
// https://binarysearch.com/problems/camelCase
// EASY, STRING

string solve(vector<string>& words) {
    if (words.empty()) return "";
    function<string(string)> stringToLower = [](string data) {
        std::transform(data.begin(), data.end(), data.begin(), [](unsigned char c){ 
            return std::tolower(c); 
        });
        return data;
    };
    string ans = stringToLower(words[0]);
    for (int i = 1; i < words.size(); ++ i) {
        ans += (char)std::toupper(words[i][0]);
        ans += stringToLower(words[i].substr(1));
    }
    return ans;
}
