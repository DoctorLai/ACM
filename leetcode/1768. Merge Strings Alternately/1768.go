// https://helloacm.com/golang-merge-strings-alternately/
// https://leetcode.com/problems/merge-strings-alternately/
// EASY, TWO POINTER

func mergeAlternately(word1 string, word2 string) string {
    var l1, l2 = len(word1), len(word2)
    var ans = ""
    for i, j := 0, 0; i < l1 || j < l2; i, j = i + 1, j + 1 {
        if i < l1 {
            ans += string(word1[i])
        }
        if j < l2 {
            ans += string(word2[j])
        }
    }
    return ans
}
