// https://helloacm.com/how-to-flatten-2d-vector-in-c/
// https://leetcode.com/problems/flatten-2d-vector/

class Vector2D {
public:
    Vector2D(vector<vector<int>>& v) {
        process(v);
    }
    
    int next() {
        return data[i ++];
    }
    
    bool hasNext() {
        return i < data.size();    
    }
    
private:
    vector<int> data;
    int i = 0;
    
    void process(vector<vector<int>>& v) {
        for (const auto &x: v) {
            for (const auto &y: x) {
                data.push_back(y);
            }
        }
    }
};
 
/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(v);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
