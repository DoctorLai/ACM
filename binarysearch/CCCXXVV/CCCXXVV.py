# https://helloacm.com/how-to-convert-roman-to-integer-in-cc/
# https://binarysearch.com/problems/CCCXXVV
# MEDIUM, MATH, STRING

class Solution:
    def solve(self, numeral):
        mapping = {
            'M': 1000,
            'D': 500,
            'C': 100,
            'L': 50,
            'X': 10,
            'V': 5,
            'I': 1
        }      
        ans = 0  
        for i in range(len(numeral) - 1):
            if mapping[numeral[i]] >= mapping[numeral[i + 1]]:
                ans += mapping[numeral[i]]
            else:
                ans -= mapping[numeral[i]]
        return ans + mapping[numeral[-1]]
