// https://helloacm.com/how-to-design-a-browser-history-using-double-ended-queue-deque-in-c/
// https://leetcode.com/problems/design-browser-history/
// MEDIUM, DEQUE

class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        cursor = 0;
    }
    
    void visit(string url) {
        while (history.size() - 1 > cursor) {
            history.pop_back();
        }
        history.push_back(url);
        cursor ++;
    }
    
    string back(int steps) {
        if (steps > cursor) {
            cursor = 0;
            return history[0];
        }
        cursor -= steps;
        return history[cursor];
    }
    
    string forward(int steps) {
        if (steps + cursor >= history.size()) {
            cursor = history.size() - 1;
            return history[cursor];
        }
        cursor += steps;
        return history[cursor];
    }
private:
    int cursor;
    deque<string> history;
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
