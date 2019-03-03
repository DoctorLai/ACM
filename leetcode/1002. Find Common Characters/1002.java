// https://helloacm.com/how-to-find-common-characters-in-an-array-of-strings/
// https://leetcode.com/problems/find-common-characters/

class Solution {
    public List<String> commonChars(String[] A) {
        int[][] count = new int[100][26];
        for (int i = 0; i < A.length; ++ i) {
            for (int j = 0; j < A[i].length(); ++ j) {
                char ch = A[i].charAt(j);
                // occurence of character in each string
                count[i][ch - 97] ++;
            }
        }
        List<String> result = new ArrayList<>();
        for (int i = 0; i < 26; ++ i) {
            int k = Integer.MAX_VALUE;
            for (int j = 0; j < A.length; j ++) {
                if (count[j][i] == 0) {
                    k = -1; // doesn't appear in every string
                    break;
                }
                k = Math.min(k, count[j][i]); // the minimal number of the letter
            }
            while (k -- > 0) {
                result.add(Character.toString((char)(97 + i)));
            }
        }
        return result;
    }
}
