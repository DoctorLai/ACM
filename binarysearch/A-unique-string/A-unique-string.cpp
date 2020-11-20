// https://helloacm.com/how-to-check-if-a-given-string-has-unique-characters/
// https://binarysearch.com/problems/A-unique-string
// EASY, HASH TABLE, STRING

bool solve(string s) {
    unordered_set<char> seen;
    for (const auto &n: s) {
        if (seen.count(n)) return false;
        seen.insert(n);
    }
    return true;
}
