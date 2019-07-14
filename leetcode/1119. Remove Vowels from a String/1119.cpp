// https://helloacm.com/how-to-remove-vowels-from-a-string-in-c/
// https://leetcode.com/problems/remove-vowels-from-a-string/

class Solution {
public:
    string removeVowels(string S) {
        return std::accumulate(begin(S), end(S), std::string{}, [](auto &a, auto &b) {
            if (string("aeiou").find(b) == string::npos) {
                return a + b; 
            } 
            return a; // b is vowel, ignore
        });
    }
};
