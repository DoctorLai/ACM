// https://helloacm.com/how-to-design-a-two-sum-data-structure/
// https://leetcode.com/problems/two-sum-iii-data-structure-design/

class TwoSum {
public:
    /** Initialize your data structure here. */
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        data.insert(number);
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for (const auto &n: data) {
            int c = value == n + n ? 1 : 0;
            if (data.count(value - n) > c) {
                return true;
            }
        }
        return false;
    }
private:
    unordered_multiset<int> data;
};
 
/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
