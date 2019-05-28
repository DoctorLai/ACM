// https://helloacm.com/how-to-reverse-words-in-a-string-in-place-using-c-stdreverse/
// https://leetcode.com/problems/reverse-words-in-a-string-ii/

class Solution {
public:
    void reverseWords(vector<char>& str) {
        int n = str.size();
        reverse(str, 0, n);
        int j, i = 0;
        while (i < n) {
            j = i;
            while ((i < n) && (str[i] != ' ')) i ++;
            reverse(str, j, i);
            i ++;
        }
    }
    
private:
    void reverse(vector<char>& str, int start, int end) {
        for (int i = start; i < (end + start) / 2; ++ i) {
            swap(str[i], str[end - 1 - (i - start)]);
        }
    }        
};
