// https://helloacm.com/how-to-implement-strstr-function-in-c/
// https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i + needle.size() - 1 < haystack.size(); ++ i) {
           bool ok = true;
           for (int j = 0; j < needle.size(); ++ j) {
              if (haystack[i + j] != needle[j]) {
                  ok = false;
                  break;
              }   
           }
           if (ok) return i;
        }
        return (needle.size() == 0) ? 0 : -1;
    }
};
