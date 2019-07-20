// https://helloacm.com/how-to-design-a-snake-game/
// https://leetcode.com/problems/design-snake-game/

class SnakeGame {
private:
    deque<vector<int>> body;
    int W, H;
    vector<vector<int>> food;
    int score = 0;
 
public:
    /** Initialize your data structure here.
        @param width - screen width
        @param height - screen height 
        @param food - A list of food positions
        E.g food = [[1,1], [1,0]] means the first food is positioned at [1,1], the second is at [1,0]. */
    SnakeGame(int width, int height, vector<vector<int>>& food) {
        this->W = width;
        this->H = height;
        this->food = food;
        body.push_back({0, 0});
    }
    
    /** Moves the snake.
        @param direction - 'U' = Up, 'L' = Left, 'R' = Right, 'D' = Down 
        @return The game's score after the move. Return -1 if game over. 
        Game over when snake crosses the screen boundary or bites its body. */
    int move(string direction) {
        auto head = body.front();
        int r = head[0];
        int c = head[1];
        for (const auto &ch: direction) {
            switch (ch) {
                case 'U':
                    r --;
                    break;
                case 'L':
                    c --;
                    break;
                case 'R':
                    c ++;
                    break;
                case 'D':
                    r ++;
                    break;
                default:
                    return -1;
            }
            if (r < 0 || c < 0 || c >= W || r >= H) {
                return -1;
            }
            if (food.size() > 0) {
                vector<int> f = food[0];
                if (f[0] == r && f[1] == c) {
                    food.erase(begin(food));
                    body.push_front({r, c});
                    score ++;
                    continue;
               }
            }
            body.pop_back();
            if (std::find(begin(body), end(body), vector<int>{r, c}) != body.end()) {
                return -1;
            }
            body.push_front({r, c});
        }
        return score;
    }
};
