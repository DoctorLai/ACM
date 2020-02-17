// https://helloacm.com/how-to-compute-the-product-of-last-k-elements-in-array-using-the-prefix-product-algorithm/
// https://leetcode.com/problems/product-of-the-last-k-numbers/

class ProductOfNumbers {
public:
    ProductOfNumbers() {
    }
    
    void add(int num) {
        if (num > 0) {
            data.push_back(num * data.back());
        } else {
            data = {1};
        }
    }
    
    int getProduct(int k) {
        return k < data.size() ? data.back() / data[data.size() - k - 1] : 0;
    }
private:
    vector<int> data{1};
};
 
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
