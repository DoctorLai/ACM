// https://helloacm.com/how-to-uncommon-words-from-two-sentences-in-java/
// https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
    public String[] uncommonFromSentences(String A, String B) {
        List<String> result = new ArrayList<>();
        Map<String, Integer> a = new HashMap<>();
        Map<String, Integer> b = new HashMap<>();
        String[] wordsA = A.split(" ");
        String[] wordsB = B.split(" ");
        for (String x: wordsA) {
            if (a.containsKey(x)) {
                a.put(x, a.get(x) + 1);
            } else {
                a.put(x, 1);
            }
        }
        for (String x: wordsB) {
            if (b.containsKey(x)) {
                b.put(x, b.get(x) + 1);
            } else {
                b.put(x, 1);
            }
        }
        for (String x: wordsA) {
            if (a.containsKey(x)) {
                if ((a.get(x) == 1) && (!b.containsKey(x))) {
                    result.add(x);
                }
            } else {
                if (b.containsKey(x) && (b.get(x) == 1)) {
                    result.add(x);
                }
            }
        }
        for (String x: wordsB) {
            if (a.containsKey(x)) {
                if ((a.get(x) == 1) && (!b.containsKey(x))) {
                    result.add(x);
                }
            } else {
                if (b.containsKey(x) && (b.get(x) == 1)) {
                    result.add(x);
                }
            }
        }    
        return result.toArray(new String[0]);
    }
}
