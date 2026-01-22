// BRUTE FORCE APPROACH [TLE] :
// class Solution {
// public:
//     bool isValid(vector<vector<char>>& board, int row, int col, char ch) {
//         for(int i = 0; i < 9; i++) {
//             // row check
//             if(board[row][i] == ch) return false;
//             // column check
//             if(board[i][col] == ch) return false;
//             // 3x3 box check
//             int boxRow = 3 * (row / 3) + i / 3;
//             int boxCol = 3 * (col / 3) + i % 3;
//             if(board[boxRow][boxCol] == ch) return false;
//         }
//         return true;
//     }

//     bool helperFunc(vector<vector<char>>& board) {
//         for(int i = 0; i < 9; i++) {
//             for(int j = 0; j < 9; j++) {
//                 if(board[i][j] == '.') {
//                     for(char k = '1'; k <= '9'; k++) {
//                         if(isValid(board, i, j, k)) {
//                             board[i][j] = k;

//                             if(helperFunc(board)) return true;

//                             board[i][j] = '.'; 
//                         }
//                     }
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
//     void solveSudoku(vector<vector<char>>& board) {
//         helperFunc(board);
//     }
// };
// OPTIMIZED APPROACH :
class Solution {
public:
    bool row[9][9] = {false};
    bool col[9][9] = {false};
    bool box[9][9] = {false};

    bool helperFunc(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') {
                    int boxId = (i / 3) * 3 + (j / 3);

                    for(char k = '1'; k <= '9'; k++) {
                        int num = k - '1';

                        if(!row[i][num] && !col[j][num] && !box[boxId][num]) {
                            board[i][j] = k;
                            row[i][num] = col[j][num] = box[boxId][num] = true;

                            if(helperFunc(board)) return true;

                            board[i][j] = '.';
                            row[i][num] = col[j][num] = box[boxId][num] = false;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    int num = board[i][j] - '1';
                    int boxId = (i / 3) * 3 + (j / 3);
                    row[i][num] = col[j][num] = box[boxId][num] = true;
                }
            }
        }
        helperFunc(board);
    }
};

