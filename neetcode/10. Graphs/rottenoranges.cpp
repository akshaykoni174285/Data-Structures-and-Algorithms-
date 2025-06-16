#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return -1;
        int rows = grid.size();
        int cols = grid[0].size();
        // cout<<grid[][]

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        queue<pair<int, int>> q;
        int fresh = 0;
        int totalminutes = 0;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j] == 1 ){
                    fresh++;
                }
                if(grid[i][j] == 2 && !visited[i][j]){
                    q.push({i, j});
                    visited[i][j] = true;
                }
            }
        }

        while (!q.empty() && fresh > 0)
        {
            int size = q.size();
            totalminutes++;
            for(int i=0;i<size;i++){
                auto [X,Y] = q.front();
                q.pop();
                for(auto [x,y]:directions){
                    int newX = X + x;
                    int newY = Y + y;
                    if(newX >= 0 && newX < rows && newY >= 0 && newY < cols && grid[newX][newY] == 1 && !visited[newX][newY]){
                        q.push({newX, newY});
                        visited[newX][newY] = true;
                        fresh--;
                    }
                }

            }
        }
        if(fresh != 0){
            return -1;
        }
        else {
            return totalminutes;
        }

        
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };

    int result = sol.orangesRotting(grid);
    cout << "Minimum minutes to rot all oranges: " << result << endl;
    cout<<endl;
    return 0;
}
