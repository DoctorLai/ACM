// https://helloacm.com/the-unique-morse-code-words-algorithm/
// https://leetcode.com/problems/unique-morse-code-words/

class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] morseTable = new String[] {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        Set<String> outcome = new HashSet<>();
        for (String s: words) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < s.length(); ++ i) {
                sb.append(morseTable[s.charAt(i) - 97]);
            }
            outcome.add(sb.toString());
        }
        return outcome.size();
    }
}
