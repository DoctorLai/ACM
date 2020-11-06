// https://helloacm.com/math-algorithm-to-count-the-number-of-palindromes-made-from-letters/
// https://binarysearch.com/problems/Palindrome-Count
// EASY, STRING, MATH

int solve(string s, int k) {
    unordered_set<char> data(begin(s), end(s));
    int t = data.size();
    if (k & 1) {
        return pow(t, k/2) * t;
    } else {
        return pow(t, k/2);
    }
}
