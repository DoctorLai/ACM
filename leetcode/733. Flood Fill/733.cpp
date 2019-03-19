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
        image[sr][sc] = newColor;
        if ((sr > 0) && (image[sr - 1][sc] == color)) floodFill(image, sr - 1, sc, newColor);
        if ((sc > 0) && (image[sr][sc - 1] == color)) floodFill(image, sr, sc - 1, newColor);
        if ((sr < height - 1)  && (image[sr + 1][sc] == color)) floodFill(image, sr + 1, sc, newColor);
        if ((sc < width - 1) && (image[sr][sc + 1] == color)) floodFill(image, sr, sc + 1, newColor);
        return image;
    }
};
