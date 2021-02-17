// https://helloacm.com/coding-exercise-c-least-recently-used-lru-cache-online-judge/
// https://leetcode.com/problems/lru-cache/
// MEDIUM, LRU, LINKED LIST

struct Node {
    int key;
    int value;
};

class LRUCache {
private:
    list<Node> values;
    unordered_map<int, list<Node>::iterator> data;    
    int capacity;
    
public:
    LRUCache(int capacity): capacity(capacity) {}
    
    int get(int key) {
        auto item = data.find(key);
        if (item == data.end()) {
            return -1;
        }
        auto it = item->second;
        auto node = *it;
        values.erase(it);
        values.push_back(node);
        data[key] = prev(values.end());
        return node.value;
    }
    
    void put(int key, int value) {
        auto item = data.find(key);
        if (item == data.end()) {
            if (values.size() == capacity) {
                auto node = values.front();
                values.pop_front();
                auto it = data.find(node.key);
                data.erase(it);
            }
            values.push_back({key, value});
            data[key] = prev(values.end());
        } else {
            auto it = item->second;
            auto node = *it;
            values.erase(it);
            node.value = value;
            values.push_back(node);
            data[key] = prev(values.end());
        }        
    }
};
