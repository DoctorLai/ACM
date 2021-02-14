// https://helloacm.com/algorithms-to-compute-the-sliding-window-product/
// https://binarysearch.com/problems/Sliding-Window-Product
// MEDIUM, MATH

class SlidingWindowProduct {
    public:
    SlidingWindowProduct() {

    }

    void add(int num) {
        if (num == 0) {
            data.clear();
        }
        data.push_back(num * s);
        if (num == 0) {
            s = 1;
        } else {
            s = data.back();
        }
    }

    int product(int k) {
        if (k >= data.size()) {
            if (data[0] == 0) return 0;
            return data.back();
        }
        int prev = data[static_cast<int>(data.size()) - k - 1];
        if (prev == 0) return data.back();
        return data.back() / prev;
    }
    private:
    vector<int> data;
    int s = 1;
};
