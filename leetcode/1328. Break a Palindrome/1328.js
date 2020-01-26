// https://helloacm.com/how-to-break-a-palindrome-string-by-replacing-a-character/
// https://leetcode.com/problems/break-a-palindrome/
// MEDIUM

/**
 * @param {string} palindrome
 * @return {string}
 */
var breakPalindrome = function(palindrome) {
    if (palindrome.length === 1) {
        return "";
    }
    for (let i = 0; i < Math.floor(palindrome.length / 2); ++ i) {
        if (palindrome[i] != 'a') {
            return palindrome.substr(0, i) + 'a' + 
                palindrome.substr(i + 1);
        }
    }
    return palindrome.substr(0, palindrome.length - 1) + 'b';
};
