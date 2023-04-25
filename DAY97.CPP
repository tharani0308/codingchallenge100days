//Rectangle Overlap
//https://leetcode.com/problems/rectangle-overlap/

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], y1 = rec1[1], x2 = rec1[2], y2 = rec1[3];
        int x3 = rec2[0], y3 = rec2[1], x4 = rec2[2], y4 = rec2[3];  
        
        if(x2 <= x3 || x4 <= x1)
            return false;
        
        if (y2 <= y3 || y4 <= y1)
             return false;
        if(x1 == x2 || x3 == x4 || y1 == y2 || y3 == y4)
             return false;
        
        return true;
    }
};

//Projection area of 3D shapes
//https://leetcode.com/problems/projection-area-of-3d-shapes/

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        int N=grid.size();
        for (int i = 0; i < N;  ++i) {
            int bestRow = 0;  
            int bestCol = 0;  
            for (int j = 0; j < N; ++j) {
                if (grid[i][j] > 0) ans++;  
                bestRow = max(bestRow, grid[i][j]);
                bestCol = max(bestCol, grid[j][i]);
            }
            ans += bestRow + bestCol;
        }

        return ans;
    }
};