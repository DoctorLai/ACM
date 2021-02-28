// https://helloacm.com/design-a-maximum-frequency-stack/
// https://leetcode.com/problems/maximum-frequency-stack/
// HARD, STACK, HASH TABLE

class FreqStack {
public:
    FreqStack() {
        
    }
    
    void push(int x) {
        freq[x] ++;
        int f = freq[x];
        maxFreq = max(maxFreq, f);
        data[f].push(x);
    }
    
    int pop() {
        int x = data[maxFreq].top();
        data[maxFreq].pop();
        freq[x] --;
        if (data[maxFreq].empty()) {
            maxFreq --;
        }
        return x;
    }
private:
    int maxFreq = -1;
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> data;
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
