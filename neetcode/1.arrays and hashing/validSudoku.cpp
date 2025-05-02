#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // You will fill in the logic here

        // for row 
        for(int i=0;i<9;i++){
            unordered_set<char> seen;
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                if(seen.count(board[i][j])) return false;
                seen.insert(board[i][j]);
            }

        }

        for(int i=0;i<9;i++){
            unordered_set<char> seen;
            for(int j=0;j<9;j++){
                if(board[j][i] == '.') continue;
                if(seen.count(board[j][i])) return false;
                seen.insert(board[j][i]);
            }
        }

        for(int square=0;square<9;square++){
            unordered_set<char>seen;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = (square/3) *3 +i;
                    int column = (square%3) *3+j;
                    if(board[row][column] == '.')continue;
                    if(seen.count(board[row][column])) return false;
                    seen.insert(board[row][column]);
                }
            }
        }
        return true;
    }
};

int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution sol;
    bool result = sol.isValidSudoku(board);

    cout << (result ? "Valid Sudoku" : "Invalid Sudoku") << endl;

    return 0;
}
