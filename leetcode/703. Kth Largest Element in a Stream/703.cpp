// https://helloacm.com/how-to-compute-kth-largest-element-in-a-stream/
// https://leetcode.com/problems/kth-largest-element-in-a-stream/

class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
       this->kth = k;
       for (const auto &n: nums) {
           pq.push(n);
       } 
    }
    
    int add(int val) {
       pq.push(val);
       while (kth < pq.size()) {
           pq.pop();
       }
       return pq.top();
    }
private:
    int kth;
    priority_queue<int, vector<int>, std::greater<int>> pq;
};
 
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
