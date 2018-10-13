// https://helloacm.com/how-to-find-smallest-letter-greater-than-target/
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function(letters, target) {
    for (let n of letters) {
        if (n > target) {
            return n;
        }
    }
    return letters[0];
};
