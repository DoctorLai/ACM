// https://helloacm.com/algorithm-to-compute-the-fraction-to-recurring-decimal-of-the-two-integer-division/
// https://leetcode.com/problems/fraction-to-recurring-decimal/
// MEDIUM, MATH, HASH MAP

class Solution {
    public String fractionToDecimal(int numerator, int denominator) {
        if (denominator == 0) {
            return (numerator >= 0) ? "INF" : "-INF"; 
        }
        if (numerator == 0) return "0";
        long a = Math.abs(Long.valueOf(numerator));
        long b = Math.abs(Long.valueOf(denominator));
        long rem = a % b;
        StringBuilder sb = new StringBuilder();
        if (numerator < 0 ^ denominator < 0) {
            sb.append('-');
        }
        sb.append(a / b);
        if (rem == 0) {
            return sb.toString();
        }
        sb.append('.');
        Map<Long, Integer> map = new HashMap<>();
        while (rem != 0) {
            if (map.containsKey(rem)) {
                sb.insert(map.get(rem), "(");
                sb.append(")");
                break;
            }
            map.put(rem, sb.length());
            rem *= 10;
            sb.append(rem / b);
            rem = rem % b;
        }
        return sb.toString();
    }
}
