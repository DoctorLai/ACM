// https://helloacm.com/teaching-kids-programming-minimum-operations-to-reduce-an-integer-to-0-greedy-iterative-algorithm/
// https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/
// MEDIUM, GREEDY, MATH

impl Solution {
    pub fn min_operations(mut n: i32) -> i32 {
        let mut ans = 0;
        while (n > 0) {
            let x = (n as f32).log2().floor() as i32;
            let na = n - (1 << x);
            let nb = (1 << (x + 1)) - n;
            n = na.min(nb);
            ans += 1;
        }
        ans        
    }
}
