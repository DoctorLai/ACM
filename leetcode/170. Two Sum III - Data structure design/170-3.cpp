// https://helloacm.com/how-to-design-a-two-sum-data-structure/
// https://leetcode.com/problems/two-sum-iii-data-structure-design/
// EASY, DESIGN

class TwoSum {
public:
    /** Initialize your data structure here. */
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
       auto it = upper_bound(begin(data), end(data), number);
       data.insert(it, number);
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        int lo = 0, hi = data.size() - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (data[lo] + data[hi] == value) {
                return true;
            }
            if (data[lo] + data[hi] > value) {
                hi --;
            } else {
                lo ++;
            }
        }
        return false;
    }
private:
    vector<int> data;
};
 
/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
