// https://helloacm.com/walking-robot-simulation-algorithm-with-obstacles-detection/
// https://leetcode.com/problems/walking-robot-simulation/
// EASY, SIMULATION, HASH SET

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dir[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0;
        unordered_set<string> obj;
        for (const auto &n: obstacles) {
            obj.insert(std::to_string(n[0]) + "," + std::to_string(n[1]));
        }
        int d = 0, ans = 0;
        for (const auto &n: commands) {
            switch(n) {
                case -2: d = (d + 3) % 4; break;
                case -1: d = (d + 1) % 4; break;
                default: 
                    for (int i = 0; i < n; ++ i) {
                        int nx = x + dir[d][0];
                        int ny = y + dir[d][1];
                        if (!obj.count(std::to_string(nx) + "," + std::to_string(ny))) {
                            x = nx;
                            y = ny;
                            ans = max(ans, x * x + y * y);
                        } else {
                            break;
                        }
                    }
                    break;
            }
        }
        return ans;
    }
};
