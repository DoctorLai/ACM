// https://helloacm.com/golang-shuffle-the-array/
// https://leetcode.com/problems/shuffle-the-array/
// EASY, ARRAY

func shuffle(nums []int, n int) []int {
    var ans = make([]int, n << 1)
    for i, j, k := 0, n, 0; i < n; i, j, k = i + 1, j + 1, k + 2 {
        ans[k] = nums[i]
        ans[k + 1] = nums[j]
    }
    return ans
}
