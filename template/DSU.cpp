// https://helloacm.com/the-union-find-disjoint-set-implementation-in-java/

class DSU {
public:
    DSU(int n) {
        data.resize(n);
        iota(begin(data), end(data), 0);
        rank.resize(n, 0);
        count = n;
    }
    
    int find(int x) {
        if (x != data[x]) {
            data[x] = find(data[x]);
        }
        return data[x];
    }
    
    bool join(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px == py) return false;
        count --;
        if (rank[px] > rank[py]) {
            data[py] = px;
        } else if (rank[py] > rank[px]) {
            data[px] = py;
        } else {
            data[px] = py;
            ++ rank[py];
        }
        return true;
    }
    
    int size() {
        return count;
    }   
    
private:
    vector<int> data;
    vector<int> rank;
    int count;
};
