// https://helloacm.com/design-a-moving-average-class-for-data-stream/
// https://leetcode.com/problems/moving-average-from-data-stream/
// EASY, DEQUE

class MovingAverage {
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        M = size;
    }
    
    double next(int val) {
        if (data.size() < M) {
            data.push_back(val);
            sum += val;
            return (double)sum / data.size();
        }
        sum -= data[0];
        data.pop_front();
        sum += val;
        data.push_back(val);
        return (double)sum / data.size();
    }
private:
    deque<int> data;
    int M;
    int sum = 0;
};
 
/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
