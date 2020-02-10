// https://helloacm.com/c-c-program-to-compute-the-angle-between-hands-of-a-clock/
// https://leetcode.com/problems/angle-between-hands-of-a-clock/
// MEDIUM, GEOMETRY

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = ((hour % 12) + minutes * 1.0/60) * 30;
        double minutesAngle = minutes * 6;
        double a = abs(hourAngle - minutesAngle);
        double b = 360 - a;
        return a < b ? a : b;
    }
};
