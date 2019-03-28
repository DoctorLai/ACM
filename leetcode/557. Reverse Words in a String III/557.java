// https://helloacm.com/how-to-reverse-words-in-a-string/
// https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");
        StringBuilder r = new StringBuilder();
        for (String word: words) {
            r.append(new StringBuffer(word).reverse().toString() + " ");
        }
        return r.toString().trim();
    }
}
