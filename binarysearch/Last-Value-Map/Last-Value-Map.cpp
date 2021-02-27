// https://helloacm.com/design-a-last-value-map-in-c/
// https://binarysearch.com/problems/Last-Value-Map
// MEDIUM, LINKED LIST

class LastValueMap {
    public:
    LastValueMap() {

    }

    void set(int key, int value) {
        if (data.count(key)) {
            auto item = data[key];
            *item = value;
            arr.erase(item);
            arr.push_back(*item);
            data[key] = item;
        } else {
            arr.push_back(value);
            data[key] = prev(end(arr));
        }
    }

    void remove(int key) {
        auto item = data[key];
        data.erase(key);
        arr.erase(item);
    }

    int getLast() {
        return *prev(end(arr));
    }

    private:
        unordered_map<int, list<int>::iterator> data;
        list<int> arr;

};
