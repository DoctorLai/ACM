// https://helloacm.com/design-a-leaderboard-using-priority-queue-hash-map-unordered_map-or-hash-set-multi_set/
// https://leetcode.com/problems/design-a-leaderboard/
// MEDIUM, HASH MAP, MULTI SET

class Leaderboard {
public:
    Leaderboard() {
        
    }
    
    void addScore(int playerId, int score) {
        auto it = scores.find(players[playerId]);
        if (it != scores.end()) {
            scores.erase(it);
        }
        players[playerId] += score;
        scores.insert(players[playerId]);
    }
    
    int top(int K) {
        int sum = 0;
        for (auto it = --scores.end(); K > 0; -- K, it --) {
            sum += *it;
        }
        return sum;
    }
    
    void reset(int playerId) {
        scores.erase(scores.find(players[playerId]));
        players.erase(playerId);
    }
private:
    unordered_map<int, int> players;
    multiset<int> scores;
};
