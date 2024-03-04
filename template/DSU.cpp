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

class UnionFind {
    public:
        UnionFind(int n): N(n) {
            data.resize(n);
            sizes.resize(n, 0);
            std::iota(begin(data), end(data), 0);
        }

        bool merge(int a, int b) {
            int pa = find(a);
            int pb = find(b);
            if (pa == pb) {
                return false;
            }
            int sa = sizes[pa];
            int sb = sizes[pb];
            if (sa >= sb) {
                swap(pa, pb);
            }
            data[pa] = pb;
            sizes[pb] ++;
            return true;
        }

        int find(int x) {
            if (x != data[x]) {
                data[x] = find(data[x]);
            }
            return data[x];
        }

        int size(int x) {
            return count_if(begin(data), end(data), [&](auto a) { 
                return data[x] == a; 
            });
        }

    private:
        vector<int> data;
        vector<int> sizes;
        int N;    
};
