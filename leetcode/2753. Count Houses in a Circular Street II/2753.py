# https://helloacm.com/teaching-kids-programming-algorithms-to-count-houses-in-a-circular-street-with-restrictions-at-least-one-door-open/
# https://leetcode.com/problems/count-houses-in-a-circular-street-ii/
# HARD, DESIGN

# Definition for a street.
# class Street:
#     def closeDoor(self):
#         pass
#     def isDoorOpen(self):
#         pass
#     def moveRight(self):
#         pass
class Solution:
    def houseCount(self, s: Optional['Street'], k: int) -> int:
        firstOpen = None
        lastOpen = 0
        d = 0
        while d - lastOpen <= k:
            if s.isDoorOpen():
                if not firstOpen:
                    firstOpen = d
                lastOpen = d
                if firstOpen != lastOpen:
                    s.closeDoor()
            d += 1
            s.moveRight()
        return lastOpen - firstOpen
