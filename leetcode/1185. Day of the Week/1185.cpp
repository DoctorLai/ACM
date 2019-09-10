// https://helloacm.com/how-to-compute-the-day-of-the-week-using-c/
// https://leetcode.com/problems/day-of-the-week/

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string names[7] { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int total = 0;
        for (int i = 1970; i < year; ++ i) {
            if (isLeap(i)) {
                total += 366;
            } else {
                total += 365;
            }
        }
        for (int i = 1; i < month; ++ i) {
            switch (i) {
                case 1: total += 31; break;
                case 2: total += (isLeap(year) ? 29 : 28); break;
                case 3: total += 31; break;
                case 4: total += 30; break;
                case 5: total += 31; break;
                case 6: total += 30; break;
                case 7: total += 31; break;
                case 8: total += 31; break;
                case 9: total += 30; break;
                case 10: total += 31; break;
                case 11: total += 30; break;
            }
        }
        return names[(4 + total + day - 1) % 7];
    }
private:
    bool isLeap(int year) {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        if (year % 4 == 0) return true;
        return false;
    }    
};
