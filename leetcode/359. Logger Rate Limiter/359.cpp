// https://helloacm.com/design-a-logger-rate-limiter-in-c-java/
// https://leetcode.com/problems/logger-rate-limiter/

class Logger {
public:
    /** Initialize your data structure here. */
    Logger() {
            
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        // remove invalid entries
        while (!last10.empty()) {
            auto key = last10.front();
            if (timestamp - key.first >= 10) {
                last10.pop();
                cache.erase(key.second); // remove from hash set
            } else {
                break;
            }
        }   
        if (cache.count(message)) {
            return false; //  printed in last 10 seconds
        }
        // inserting the entry
        cache.insert(message);
        last10.push(make_pair(timestamp, message));
        return true;
    }
    
private:
    unordered_set<string> cache;
    queue<pair <int, string>> last10;
};
