#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));

        if(grid.empty()) return 0;
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    visited[i][j] = true;
                }
                else if(grid[i][j]==1) fresh++;
            }
        }

        if(fresh==0) return 0;

        int minutes = 0;
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};

        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto [x,y] = q.front();
                q.pop();

                for(int k=0;k<4;k++){
                    int newX = x + dx[k];
                    int newY = y + dy[k];

                    if(newX>=0 && newX<rows && newY>=0 && newY<cols && grid[newX][newY]==1 && !visited[newX][newY]){
                        q.push({newX,newY});
                        visited[newX][newY] = true;
                        fresh--;
                    }
                }
            }
            minutes++;
        }
        if(fresh>0) return -1;
        return minutes;
        



        // You can implement your BFS logic here
        return 0;
        
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
