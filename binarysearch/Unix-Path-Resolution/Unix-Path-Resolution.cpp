// https://helloacm.com/unix-path-resolution-algorithm/
// https://binarysearch.com/problems/Unix-Path-Resolution
// EASY, STRING, STACK

vector<string> solve(vector<string>& path) {
    vector<string> ans;
    for (auto &n: path) {
        if (n == "..") {
            if (!ans.empty()) {
                ans.pop_back();
            }            
        } else if (n != ".") {
            ans.push_back(n);
        }
    }
    return ans;
}
