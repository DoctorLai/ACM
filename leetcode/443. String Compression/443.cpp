// https://helloacm.com/in-place-run-length-string-compressions-using-c/
// https://leetcode.com/problems/string-compression/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) return n;
        int j = 0, i = 0;
        while (i < n) {
            int k = i;
            // skip duplicates
            while ((k + 1 < n) && chars[k] == chars[k + 1]) {
                k ++;
            }
            // compute the repeat count
            int count = k - i + 1;
            // fill the character first
            chars[j ++] = chars[i];
            // skip writting 1 as counter
            if (count == 1) {
                i ++;
                continue;
            }
            // write out the reversed 'counter'
            int start = j;
            while (count > 0) {
                chars[j ++] = (char)(48 + (count % 10));
                count /= 10;
            }
            // reverse the counter e.g. if (count >= 10)
            std::reverse(begin(chars) + start, begin(chars) + j);
            // navigate to next character
            i = k + 1; 
        }
        return j;
    }
};
