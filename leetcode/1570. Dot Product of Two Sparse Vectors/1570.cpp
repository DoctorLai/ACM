// https://helloacm.com/algorithms-to-compute-the-dot-product-of-two-sparse-vectors/
// https://leetcode.com/problems/dot-product-of-two-sparse-vectors/

class SparseVector {
public:    
    SparseVector(vector<int> &nums) {  
        for (int i = 0; i < nums.size(); ++ i) {
            if (nums[i] != 0) {
                data.push_back(make_pair(i, nums[i]));
            }
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        auto xx = vec.getData();
        auto x = xx.begin();
        auto y = data.begin();
        int s = 0;
        while ((x != end(xx)) && (y != end(data))) {
            if (x->first == y->first) {
                s += x->second * y->second;
                x ++;
                y ++;
            } else if (x->first < y->first) {
                x ++;
            }  else {
                y ++;
            }
        }
        return s;
    }
    
    list<pair<int, int>> getData() {
        return data;
    }    
private:
    list<pair<int, int>> data;
};
