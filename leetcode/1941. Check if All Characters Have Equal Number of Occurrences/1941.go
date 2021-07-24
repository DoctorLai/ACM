// https://helloacm.com/check-if-all-characters-have-equal-number-of-occurrences/
// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
// EASY, HASH MAP

func areOccurrencesEqual(s string) bool {
    var data = make(map[rune]int)
    for _, i := range s {
        data[i] ++
    }
    var d = make(map[int]int)
    for _, i := range data {
        d[i] ++
        if len(d) > 1 {
            return false;
        }
    }
    return true;
}
