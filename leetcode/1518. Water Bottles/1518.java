// https://helloacm.com/simulation-algorithm-to-compute-the-number-of-water-bottles/
// https://leetcode.com/problems/water-bottles/
// EASY, SIMULATION

class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int empty = numBottles;
        while (empty >= numExchange) {
            int newBottles = empty / numExchange;
            ans += newBottles;
            empty = newBottles + empty % numExchange;
        }
        return ans;
    }
}
