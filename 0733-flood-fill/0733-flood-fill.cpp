class Solution {

private:
    vector<int> diff = {0,1,0,-1,0};
    void dfs(vector<vector<int>>& image, int r, int c, int R, int C, int colour, int src) {
        image[r][c] = colour;
        for(int i = 0; i < 4; i++) {
            int ar = r+diff[i], ac = c+diff[i+1];
            if(ar >= 0 && ac >= 0 && ar < R && ac < C && image[ar][ac] == src) {
                dfs(image, ar, ac, R, C, colour, src);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int src = image[sr][sc];
        if(src == color) return image;
        int R = image.size(), C = image[0].size();
        dfs(image, sr, sc, R, C, color, src);
        return image;
    }
};