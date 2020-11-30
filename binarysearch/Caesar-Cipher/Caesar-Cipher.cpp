// https://helloacm.com/caesar-cipher-algorithm-in-c/
// https://binarysearch.com/problems/Caesar-Cipher
// EASY, STRING, MATH

string solve(string s, int k) {
    k %= 26;
    for (auto &n: s) {
        n = 'a' + (n - 'a' + k + 26) % 26;
    }
    return s;
}
