// https://helloacm.com/golang-sign-of-the-product-of-an-array/
// https://leetcode.com/problems/sign-of-the-product-of-an-array/
// EASY, MATH

func arraySign(nums []int) int {    
    var c = 0
    for _, v := range nums {
        if v == 0 {
            return 0            
        } else if v < 0 {
            c += 1
        }
    }
    if (c & 1) == 1 {
        return -1
    }
    return 1
}
