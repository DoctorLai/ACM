# https://helloacm.com/teaching-kids-programming-hour-and-minute-angle-on-a-clock/
# https://binarysearch.com/problems/Clock-Angle
# MEDIUM, MATH

class Solution:
    def solve(self, hour, minutes):
        hour %= 12
        hh = (hour*30 + minutes/2)
        mm = minutes*6
        ang = abs(hh - mm)
        return floor(min(ang, 360-ang))
