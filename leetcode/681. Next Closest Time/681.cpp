// https://helloacm.com/bruteforce-algorithm-to-find-the-next-closet-time-reusing-the-current-digits/
// https://leetcode.com/problems/next-closest-time/

class Solution {
public:
    string nextClosestTime(string time) {
        int h1 = time[0] - '0';
        int h2 = time[1] - '0';
        int m1 = time[3] - '0';
        int m2 = time[4] - '0';
        int h = h1 * 10 + h2;
        int m = m1 * 10 + m2;
        unordered_set<int> digits({h1, h2, m1, m2});
        for (;;) {
            m ++;
            if (m == 60) {
                m = 0;
                h = (h + 1) % 24;
            }            
            if ((digits.count(m % 10)) && 
                (digits.count(h % 10)) && 
                (digits.count(m / 10)) && 
                (digits.count(h / 10))) {
                return std::to_string(h/10) + 
                    std::to_string(h%10) + ":" +
                    std::to_string(m/10) + 
                    std::to_string(m%10);
            }
        }        
        return "";
    }
};
