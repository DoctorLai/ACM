// https://helloacm.com/redistribute-characters-to-make-all-strings-equal/
// https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
// EASY, STRING, HASH MAP

func makeEqual(words []string) bool {
    var c = make(map[rune]int)
    for _, s := range words {
        for _, ch := range s {
            c[ch] ++
        }
    }
    for _, v := range c {
        if v % len(words) != 0 {
            return false
        }
    }
    return true
}
