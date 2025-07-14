#include <vector>
using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;

        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>> visited(rows,vector<bool>(cols,false));


        //  first pass for the boundaries 
        


        // Your code here
    }
};

int main() {
    Solution sol;
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };
    sol.solve(board);
    return 0;
}
