// https://helloacm.com/powerful-integers-by-bruteforce-algorithm-using-c/
// https://leetcode.com/problems/powerful-integers/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        unordered_set<int> data;
        int a, b;
        for (int i = 0; (a = pow(x, i)) <= bound; ++ i) {
            for (int j = 0; (b = a + pow(y, j)) <= bound; ++ j) {
                if (b <= bound) {
                    data.insert(b);
                } else break;
                if (y == 1) break;
            }
            if (x == 1) break;
        }
        vector<int> res;
        std::copy(data.begin(), data.end(), std::back_inserter(res));
        return res;
    }
};
