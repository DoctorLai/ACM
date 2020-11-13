// https://helloacm.com/c-implementation-of-segment-tree/

struct SegmentTree {  
    int sum;
    int from;
    int to;
    SegmentTree *left;
    SegmentTree *right;
    SegmentTree(int from, int to, int sum, SegmentTree* left=NULL,SegmentTree* right=NULL): 
        from(from),to(to),sum(sum),left(left),right(right) {}
};

SegmentTree* buildTree(vector<int>& nums, int from, int to) {
    if (from == to) {
        return new SegmentTree(from, to, nums[from]);
    }
    int mid = from + (to - from) / 2;
    auto left = buildTree(nums, from, mid);
    auto right = buildTree(nums, mid + 1, to);
    return new SegmentTree(from, to, left->sum + right->sum, left, right);
}

int queryTree(SegmentTree* root, int from, int to) {
    if (from == root->from && to == root->to) {
        return root->sum;
    }
    int mid = root->from + (root->to - root->from) / 2;
    if (to <= mid) {
        return queryTree(root->left, from, to);
    } 
    if (from > mid) {
        return queryTree(root->right, from, to);
    }
    return queryTree(root->left, from, mid) +
        queryTree(root->right, mid + 1, to);
}

void updateTree(SegmentTree* root, int index, int value) {
    if ((root->from == index) && (root->to == index)) {
        root->sum = value;
        return;
    }
    int mid = root->from + (root->to - root->from) / 2;
    if (index <= mid) {
        updateTree(root->left, index, value);
    } else {
        updateTree(root->right, index, value);
    }
    root->sum = root->left->sum + root->right->sum;
}
