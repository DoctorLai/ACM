// https://helloacm.com/teaching-kids-programming-distinct-prime-factors-of-product-of-array/
// https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/
// MEDIUM, MATH

impl Solution {
    pub fn distinct_prime_factors(mut nums: Vec<i32>) -> i32 {
        use std::collections::HashSet;
        let mut a = HashSet::new();
        for x in nums.iter_mut() {
            let mut p = 2;
            while (*x != 1) {
                while *x % p == 0 {
                    *x /= p;
                    a.insert(p);
                }
                p += 1;
            }
        }
        return a.len() as _;
    }
}
