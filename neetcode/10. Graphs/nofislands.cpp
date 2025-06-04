#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;

    int rows = grid.size();
    int cols = grid[0].size();
    int islandCount = 0;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));      

    // Directions for moving up, down, left, right
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '1' && !visited[i][j]) {
                // Start a BFS/DFS to mark the entire island
                islandCount++;
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;

                while (!q.empty()) {
                    auto [x, y] = q.front();
                    q.pop();

                    for (auto& dir : directions) {
                        int newX = x + dir.first;
                        int newY = y + dir.second;

                        if (newX >= 0 && newX < rows && newY >= 0 && newY < cols &&
                            grid[newX][newY] == '1' && !visited[newX][newY]) {
                            visited[newX][newY] = true;
                            q.push({newX, newY});
                        }
                    }
                }
            }
        }
    }

    return islandCount;
}


int main(int argc, char const *argv[])
{
    
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };

    cout << "Number of islands: " << numIslands(grid) << endl;

    return 0;
}

