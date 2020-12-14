// https://helloacm.com/simple-vigenere-cipher-in-c/
// https://binarysearch.com/problems/Vigenere-Cipher
// EASY, STRING

string solve(string text, string key) {
    int k = 0;
    for (auto &n: text) {
        int r = (key[k ++] - 'a');
        n = ('a' + (n + r - 'a') % 26);
    }
    return text;
}
