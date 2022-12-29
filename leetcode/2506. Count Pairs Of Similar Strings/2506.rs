# https://helloacm.com/teaching-kids-programming-count-pairs-of-similar-strings-bruterforce-hash-map-counter-and-bit-masking/
# https://leetcode.com/problems/count-pairs-of-similar-strings/
# EASY, MATH, HASH MAP

use std::collections::HashMap;

impl Solution {
    pub fn similar_pairs(words: Vec<String>) -> i32 {
        let mut counter = HashMap::new();
        words.iter().for_each(|w| {
            let n = w.bytes().fold(0, |acc, b| acc | 1 << (b - b'a'));
            *counter.entry(n).or_insert(0) += 1;
        });
        counter.values().fold(0, |acc, &v| acc + v * (v - 1) / 2)       
    }
}
