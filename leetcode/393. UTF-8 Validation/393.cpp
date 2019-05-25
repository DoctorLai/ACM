// https://helloacm.com/how-to-validate-utf-8-encoding-the-simple-utf-8-validation-algorithm/
// https://leetcode.com/problems/utf-8-validation/

class Solution {
public:
    bool validUtf8(vector<int>& data) {
        for (int i = 0; i < data.size(); ++ i) {
            // 0xxxxxxx
            int bit1 = (data[i] >> 7) & 1;
            if (bit1 == 0) continue;
            // 110xxxxx 10xxxxxx
            int bit2 = (data[i] >> 6) & 1;
            if (bit2 == 0) return false;
            // 11
            int bit3 = (data[i] >> 5) & 1;
            if (bit3 == 0) {
                // 110xxxxx 10xxxxxx
                if ((++ i) < data.size()) {
                    if (is10x(data[i])) {
                        continue;
                    }
                    return false;
                } else {
                    return false;
                }
            }                        
            int bit4 = (data[i] >> 4) & 1;
            if (bit4 == 0) {
                // 1110xxxx 10xxxxxx 10xxxxxx
                if (i + 2 < data.size()) {
                    if (is10x(data[i + 1]) && is10x(data[i + 2])) {
                        i += 2;
                        continue;
                    }
                    return false;
                } else {
                    return false;
                }                
            }            
            int bit5 = (data[i] >> 3) & 1;
            if (bit5 == 1) return false;
            if (i + 3 < data.size()) {
                if (is10x(data[i + 1]) && is10x(data[i + 2]) && is10x(data[i + 3])) {
                    i += 3;
                    continue;
                }
                return false;
            } else {
                return false;
            }                            
        }
        return true;
    }
private:
    inline bool is10x(int a) {
        int bit1 = (a >> 7) & 1;
        int bit2 = (a >> 6) & 1;
        return (bit1 == 1) && (bit2 == 0);
    }
};
