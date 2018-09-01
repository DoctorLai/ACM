"""
https://helloacm.com/how-to-count-number-of-segments-in-a-string/
https://leetcode.com/problems/number-of-segments-in-a-string/
"""

import re

class Solution:
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = re.sub(" +", " ", s).strip()
        return len(s.split(" ")) if s != '' else 0
