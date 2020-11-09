// https://helloacm.com/c-acronym-string-algorithm/
// https://binarysearch.com/problems/Acronym
// EASY, STRING

string solve(string s) {
    istringstream ss(s);
    string ans = "", word;
    while (ss >> word) {
        if (word != "and") {
            ans += toupper(word[0]);
        }
    }
    return ans;
}
