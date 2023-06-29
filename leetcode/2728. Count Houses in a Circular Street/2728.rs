// https://helloacm.com/teaching-kids-programming-algorithms-to-count-houses-in-a-circular-street/
// https://leetcode.com/problems/count-houses-in-a-circular-street/
// EASY, DESIGN

/**
 * Definition for a street.
 * impl Street {
 *     pub fn new(doors: Vec<i32>) -> Self {}
 *     pub fn open_door(&mut self) {}
 *     pub fn close_door(&mut self) {}
 *     pub fn is_door_open(&self) -> bool {}
 *     pub fn move_right(&mut self) {}
 *     pub fn move_left(&mut self) {}
 * }
 */
impl Solution {
    pub fn house_count(mut street: Street, k: i32) -> i32 {
        for _ in 1..k {
            if street.is_door_open() {
                street.close_door();
            }
            street.move_right();
        }
        let mut ans = 1;
        street.open_door();
        street.move_left();
        while (!street.is_door_open()) {
            ans += 1;
            street.move_left();
        }
        ans
    }
}
