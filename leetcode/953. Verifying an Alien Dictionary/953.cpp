// https://helloacm.com/the-alien-dictionary-verification-algorithm/
// https://leetcode.com/problems/verifying-an-alien-dictionary/

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int table[26];
        // remember the letter order/index
        for (int i = 0; i < order.size(); ++ i) {
            table[order[i] - 97] = i;
        }
        // compare the neighbour words.
        for (int i = 0; i < words.size() - 1; ++ i) {
            if (!inorder(words[i], words[i + 1], table)) {
                return false;
            }
        }
        return true;
    }
private: // check if two words are in alien order based on the alien dictionary.
    bool inorder(string a, string b, int table[]) {
        for (int i = 0; i < min(a.size(), b.size()); ++ i) {
            if (table[a[i] - 97] > table[b[i] - 97]) {
                return false;
            } else if (table[a[i] - 97] < table[b[i] - 97]) {
                return true;
            }
        }
        return a.size() < b.size(); // shorter string comes first.
    }
};
