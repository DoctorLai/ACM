// https://helloacm.com/how-to-reverse-only-letters-in-a-string/
// https://leetcode.com/problems/reverse-only-letters/

class Solution {
    public String reverseOnlyLetters(String S) {
        int i = 0, j = S.length() - 1;
        char[] r = S.toCharArray();
        while (i < j) {
        	while (i < j && !Character.isLetter(S.charAt(i))) ++i;
        	while (i < j && !Character.isLetter(S.charAt(j))) --j;
        	char t = r[i];
        	r[i] = r[j];
        	r[j] = t;
        	i ++;
        	j --;
        }
        return String.valueOf(r);
    }
}
