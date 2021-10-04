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
        data[number] ++;
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for (auto it = data.begin(); it != data.end(); it ++) {
            if (data.find(value - it->first) != data.end()) {
                if (it->first * 2 == value) {
                    if (it->second > 1) { // special case
                        return true;
                    }
                } else {
                    return true;
                }
            }
        }
        return false;
    }
private:
    unordered_map<int, int> data;
};
 
/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
