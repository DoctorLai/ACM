// https://helloacm.com/javascript-function-to-detect-capital-string/
// https://leetcode.com/problems/detect-capital/
// EASY, REGEXP, STRING

/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    return /^([A-Z]+|[A-Z][a-z]*|[a-z]+)$/.test(word);
};
