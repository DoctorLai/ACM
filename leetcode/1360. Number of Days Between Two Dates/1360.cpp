// https://helloacm.com/algorithm-to-compute-the-number-of-days-between-two-dates/
// https://leetcode.com/problems/number-of-days-between-two-dates/
// EASY, DATE

class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(getDays(date1) - getDays(date2));
    }
    
private:
    int getDays(string date) {
        int year = atoi(date.substr(0, 4).c_str());
        int month = atoi(date.substr(5, 2).c_str());
        int day = atoi(date.substr(8, 2).c_str());
        int ans = 0;
        for (int i = 1900; i < year; ++ i) {
            if (isLeap(i)) {
                ans += 366;
            } else {
                ans += 365;
            }
        }
        for (int i = 1; i < month; ++ i) {
            switch(i) {
                case 1: ans += 31; break;
                case 2: ans += isLeap(year) ? 29 : 28; break;
                case 3: ans += 31; break;
                case 4: ans += 30; break;
                case 5: ans += 31; break;
                case 6: ans += 30; break;
                case 7: ans += 31; break;
                case 8: ans += 31; break;
                case 9: ans += 30; break;
                case 10: ans += 31; break;
                case 11: ans += 30; break;
                case 12: ans += 31; break;
            }
        }
        return ans += day - 1;
    }
    
    bool isLeap(int Y) {
        if (Y % 400 == 0) {
            return true;
        } else if ( Y % 100 == 0) {
            return false;
        } else if (Y % 4 == 0) {
            return true;
        } else {
            return false;
        }        
    }
};
