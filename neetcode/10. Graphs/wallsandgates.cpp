#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Solution {
public:
    void wallsAndGates(vector<vector<int>>& grid) {
        // Fill this in with your multi-source BFS logic
        if(grid.empty()) return;
        int rows = grid.size();
        int cols  = grid[0].size();
        queue<pair<int,int>> q;
        vector<pair<int,int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};


        for(int r = 0;r<rows;r++){
            for(int c = 0; c<cols;c++){
                if(grid[r][c] == 0){
                    q.push({r,c});
                }

            }
        }
        while(!q.empty()){
            auto [X,Y] = q.front();
            q.pop();

            for(auto& direct : directions){
                int newX = X + direct.first;
                int newY = Y + direct.second;

                if(newX>=0 && newX <rows && newY >= 0 && newY < cols && grid[newX][newY] == INT_MAX){
                    q.push({newX,newY});
                    
                    grid[newX][newY] = grid[X][Y]+1;
                    

                }   

            }
        }


    }
};

int main() {
    vector<vector<int>> grid = {
        {INT_MAX, -1, 0, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, -1},
        {INT_MAX, -1, INT_MAX, -1},
        {0, -1, INT_MAX, INT_MAX}
    };

    Solution sol;
    sol.wallsAndGates(grid);

    // Output the updated grid grid
    for (const auto& row : grid) {
        for (int val : row) {
            if (val == INT_MAX) cout << "INF ";
            else cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
