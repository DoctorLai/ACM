// https://helloacm.com/golang-check-if-n-and-its-double-exist-hash-map/
// https://leetcode.com/problems/check-if-n-and-its-double-exist/
// EASY, HASH MAP

func checkIfExist(arr []int) bool {
    var data = make(map[int]int)
    for _, n := range arr {
        data[n] ++
    }
    for key, value := range data {
        if key == 0 {
            if value > 1 {
                return true
            }
        } else if _, ok := data[key * 2]; ok {
            return true
        }
    }
    return false
}
