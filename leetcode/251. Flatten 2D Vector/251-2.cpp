// https://helloacm.com/how-to-flatten-2d-vector-in-c/
// https://leetcode.com/problems/flatten-2d-vector/

class Vector2D {
public:
    Vector2D(vector<vector<int>>& v) {
        data = v;
        i = 0;
        j = 0;
    }
    
    int next() {
        update();
        return data[i][j ++];
    }    
    
    bool hasNext() {
        update();
        return (i < data.size());
    }
    
    void update() {
        while ((i < data.size()) && (j >= data[i].size())) {
            i ++;
            j = 0;
        }        
    }
    
private:
    vector<vector<int>> data;
    int i, j;
};
