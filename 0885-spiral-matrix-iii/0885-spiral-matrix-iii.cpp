class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> spiral;
        int total = rows * cols;
        int r = rStart, c = cStart;
        int layer = 1; 
        int num = 0;
        if(r >= 0 && r < rows && c >= 0 && c < cols) {
            spiral.push_back({r, c});
            num++;
        }
        while(num < total) {
            for(int i = 0; i < layer; i++) {
                c++;
                if(r >= 0 && r < rows && c >= 0 && c < cols) {
                    spiral.push_back({r, c});
                    num++;
                }
            }
            for(int i = 0; i < layer; i++) {
                r++;
                if(r >= 0 && r < rows && c >= 0 && c < cols) {
                    spiral.push_back({r, c});
                    num++;
                }
            }
            layer++;
            for(int i = 0; i < layer; i++) {
                c--;
                if(r >= 0 && r < rows && c >= 0 && c < cols) {
                    spiral.push_back({r, c});
                    num++;
                }
            }
            for(int i = 0; i < layer; i++) {
                r--;
                if(r >= 0 && r < rows && c >= 0 && c < cols) {
                    spiral.push_back({r, c});
                    num++;
                }
            }
            layer++;
        }
        return spiral;
    }
};