# https://helloacm.com/how-to-convert-arabic-integers-to-roman-numerals/
# https://leetcode.com/problems/integer-to-roman/
# MEDIUM, MATH, STRING

class Solution:
    def intToRoman(self, num: int) -> str:
        rules = (
            ("M", 1000),
            ("CM", 900),
            ("D",  500),
            ("CD", 400),
            ("C",  100),
            ("XC",  90),
            ("L",   50),
            ("XL",  40),
            ("XXX", 30),
            ("XX",  20),
            ("X",   10),
            ("IX",   9),
            ("V",    5),
            ("IV",   4),
            ("I",    1),
        )
        
        res = ""
        for suf, val in rules:
            while num >= val:
                num -= val
                res += suf
                
        return res
