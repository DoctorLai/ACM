// https://helloacm.com/how-to-compute-the-greatest-common-divisor-of-strings/
// https://leetcode.com/problems/greatest-common-divisor-of-strings/

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        while (true) {
            if (str1 + str2 != str2 + str1) {
                return "";
            }
            if (str1 == str2) {
                return str1;
            }
            if (str1.size() > str2.size()) {
                str1 = str1.substr(str2.size());
            }
            if (str2.size() > str1.size()) {
                str2 = str2.substr(str1.size());
            }
        }
        return ""; // make compiler happy
    }
};
