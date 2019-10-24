// https://helloacm.com/how-to-compute-the-day-of-the-year/
// https://leetcode.com/problems/day-of-the-year/
// EASY, MATH, DATE

class Solution {
public:
    int dayOfYear(string date) {
        int year = std::stoi(date.substr(0, 4));
        int month = (date[5] - '0') * 10 +
            date[6] - '0';
        int day = (date[8] - '0') * 10 +
            date[9] - '0';
        int ans = 0;
        for (int i = 1; i < month; ++ i) {
            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    ans += 31;
                    break;
                case 2:
                    if (isLeap(year)) {
                        ans += 29;
                    } else {
                        ans += 28;
                    }
                    break;
                default:
                    ans += 30;
            }
        }
        return ans + day;
    }
private:
    bool isLeap(int year) {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        if (year % 4 == 0) return true;
        return false;
    }
};
