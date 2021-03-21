# https://helloacm.com/simple-robot-simulation-algorithm/
# https://binarysearch.com/problems/Roomba
# EASY, SIMULATION

class Solution:
    def solve(self, moves, x, y):
        cx = cy = 0
        for n in moves:
            if n == "SOUTH":
                cy -= 1
            elif n == "NORTH":
                cy += 1
            elif n == "WEST":
                cx -= 1
            elif n == "EAST":
                cx += 1
        return cx == x and cy == y
