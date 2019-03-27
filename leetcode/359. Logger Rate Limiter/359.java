// https://helloacm.com/design-a-logger-rate-limiter-in-c-java/
// https://leetcode.com/problems/logger-rate-limiter/

import javafx.util.Pair;
 
class Logger {
 
    /** Initialize your data structure here. */
    public Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    public boolean shouldPrintMessage(int timestamp, String message) {
        // remove invalid entries
        while (!last10.isEmpty()) {
            Pair<integer , String> key = last10.peek();
            if (timestamp - key.getKey() >= 10) {
                last10.poll();
                cache.remove(key.getValue()); // remove from hash set
            } else {
                break;
            }
        }   
        if (cache.contains(message)) {
            return false; //  printed in last 10 seconds
        }
        // inserting the entry
        cache.add(message);
        last10.add(new Pair(timestamp, message));
        return true;        
    }
    
    private Set<string> cache = new HashSet<>();
    private Queue<pair <Integer, String>> last10 = new LinkedList<>();
}
