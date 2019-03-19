// https://helloacm.com/the-image-flood-fill-algorithm-c/
// https://leetcode.com/problems/flood-fill/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int height = image.size();
        if (height == 0) return image;
        int width = image[0].size();
        if (width == 0) return image;
        int color = image[sr][sc];
        if (color == newColor) return image;
        queue<pair<int, int>> Q;
        Q.push(make_pair(sr, sc));
        while (Q.size() > 0) {
            auto p = Q.front();
            Q.pop();
            int r = p.first;
            int c = p.second;
            image[r][c] = newColor;
            if ((r < height - 1) && (image[r + 1][c] == color)) {
                Q.push(make_pair(r + 1, c));
            }
            if ((r > 0) && (image[r - 1][c] == color)) {
                Q.push(make_pair(r - 1, c));
            }
            if ((c < width - 1) && (image[r][c + 1] == color)) {
                Q.push(make_pair(r, c + 1));
            }
            if ((c > 0) && (image[r][c - 1] == color)) {
                Q.push(make_pair(r, c - 1));
            }
        }
        return image;
    }
};
