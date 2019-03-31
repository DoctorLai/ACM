// https://helloacm.com/how-to-uncommon-words-from-two-sentences-in-java/
// https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
    public String[] uncommonFromSentences(String A, String B) {
        List<String> result = new ArrayList<>();
        Map<String, Integer> a = new HashMap<>();
        for (String x: A.split(" ")) {
            a.put(x, a.getOrDefault(x, 0) + 1);
        }
        for (String x: B.split(" ")) {
            a.put(x, a.getOrDefault(x, 0) + 1);
        }
        for (String x: a.keySet()) {
            if (a.get(x) == 1) {
                result.add(x);
            }
        }
        return result.toArray(new String[0]);
    }
}
