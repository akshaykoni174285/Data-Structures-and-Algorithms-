
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

// Your Solution class goes here

class Solution {
    vector<pair<int,int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int rows;
    int cols;
    public:
        vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
            rows = heights.size();
            cols = heights[0].size();
            vector<vector<bool>> pacific(rows,vector<bool>(cols, false));
            vector<vector<bool>> atlantic(rows,vector<bool>(cols, false));
            vector<vector<int>> result;
            // BFS for Pacific Ocean
            for(int c =0; c<cols;c++){
                dfs(0,c, heights, pacific);
                dfs(rows-1,c, heights, atlantic);
            }
            for(int r =0; r<rows;r++){
                dfs(r,0, heights, pacific);
                dfs(r,cols-1, heights, atlantic);
            }
            // Collect cells that can reach both oceans
            for(int r = 0; r < rows; r++) {
                for(int c = 0; c < cols; c++) {
                    if(pacific[r][c] && atlantic[r][c]) {
                        result.push_back({r, c});
                    }
                }
            }
            return result;

            
        }
        void dfs(int r, int c,vector<vector<int>> &heights, vector<vector<bool>>& visited) {
            visited[r][c] = true;
            for(auto [dx, dy] : directions) {
                int newR = r + dx;
                int newC = c + dy;
                if(newR >= 0 && newR < rows && newC >= 0 && newC < cols && 
                   !visited[newR][newC] && heights[newR][newC] >= heights[r][c]) {
                    dfs(newR, newC, heights, visited);
                }
            }
        }
    };
    

int main() {
    vector<vector<int>> heights = {
        {1, 2, 2, 3, 5},
        {3, 2, 3, 4, 4},
        {2, 4, 5, 3, 1},
        {6, 7, 1, 4, 5},
        {5, 1, 1, 2, 4}
    };

    Solution sol;
    vector<vector<int>> result = sol.pacificAtlantic(heights);

    cout << "Cells where water can flow to both oceans:\n";
    for (auto& cell : result) {
        cout << "[" << cell[0] << ", " << cell[1] << "]\n";
    }

    return 0;
}
