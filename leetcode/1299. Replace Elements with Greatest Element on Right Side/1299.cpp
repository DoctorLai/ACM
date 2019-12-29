// https://helloacm.com/replace-elements-with-greatest-element-on-right-side-using-c-stdexchange-method/
// EASY, ARRAY

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.empty()) return {};
        int mx = 0;
        for (int i = arr.size() - 1; i >= 0; -- i) {
            mx = max(mx, exchange(arr[i], mx));
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
