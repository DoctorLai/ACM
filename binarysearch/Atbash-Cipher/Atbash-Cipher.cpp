// https://helloacm.com/a-simple-atbash-cipher/
// https://binarysearch.com/problems/Atbash-Cipher
// EASY, STRING

string solve(string text) {
    for (auto &n: text) {
        n = 'a' + ('z' - n);
    }
    return text;
}
