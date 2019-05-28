// https://helloacm.com/how-to-reverse-words-in-a-string-in-place-using-c-stdreverse/
// https://leetcode.com/problems/reverse-words-in-a-string-ii/

class Solution {
public:
    void reverseWords(vector<char>& str) {
        int n = str.size();
        std:reverse(begin(str), end(str));
        int j, i = 0;
        while (i < n) {
            j = i;
            // finding the word delimiter
            while ((i < n) && (str[i] != ' ')) i ++;
            std::reverse(begin(str) + j, begin(str) + i);
            i ++;
        }
    }
};
