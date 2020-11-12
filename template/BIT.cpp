// https://helloacm.com/the-simple-implementation-of-binary-index-tree-bit-or-fenwick-tree/

class BIT {
private:
    vector<int> data;
    
public:
    BIT(vector<int> nums) {
        data.resize(nums.size() + 1);
        for (int i = 0; i < nums.size(); ++ i) {
            add(i, nums[i]);
        }
    }
    
    BIT(int n) {
        data.resize(n + 1);
    }
    
    // add the value val to index i
    void add(int i, int val) {
        ++ i;
        while (i < data.size()) {
            data[i] += val;
            i += (i & (-i));
        }
    }
    
    // get the prefix sum from 0 to i
    int sum(int i) {
        ++ i;
        int v = 0;
        while (i) {
            v += data[i];
            i -= (i & (-i));
        }
        return v;
    }
 
    // get the range sum between [i, j]
    int queryRange(int i, int j) {
        return sum(j) - sum(i - 1);
    }
};
