// https://helloacm.com/bruteforce-backtracking-algorithm-to-split-array-into-fibonacci-sequence/
// https://leetcode.com/problems/split-array-into-fibonacci-sequence/

class Solution {
public:
    vector<int> splitIntoFibonacci(string S) {
        for (int i = 0; i < S.size(); ++ i) {            
            string aa = S.substr(0, i + 1);
            if (tooBig(aa)) break;
            int a = atoi(aa.c_str());    
            if (a < 0) continue;
            for (int j = i + 1; j + aa.size() < S.size(); ++ j) {                
                vector<int> r;       
                r.push_back(a);
                string bb = S.substr(i + 1, j - i);          
                if (tooBig(bb)) break;
                if ((bb[0] == '0') && (bb.size() > 1)) break;
                int b = atoi(bb.c_str());
                r.push_back(b);
                if (check(S.substr(j + 1), a, b, r)) {
                    return r;
                }
            }
        }
        return {};
    }
    
private:
    bool tooBig(string x) {
        const string BIG = "2147483647";
        return (x.size() > BIG.size()) || ((x.size() == BIG.size()) && (x > BIG));
    }
    
    bool check(string num, int64_t prev, int64_t cur, vector<int> &r) {
        int64_t next = prev + cur;
        string x = std::to_string(next);
        if (tooBig(x)) return false;
        if (num.size() < x.size()) return false;
        if (num.substr(0, x.size()) != x) return false;
        r.push_back(next);
        if (num.size() == x.size()) {            
            return true;
        }
        return check(num.substr(x.size()), cur, next, r);
    }
};
