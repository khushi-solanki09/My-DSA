class Solution {
public:
    bool helperFunc(vector<vector<char>>& board, string word, int m, int r ,int c) {
        if(m == word.size()) return true;

        if(r < 0 || c < 0 || r  >= board.size() || c  >= board[0].size()) return false;

        if(word[m] != board[r][c]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '#';
        bool found = helperFunc(board,word,m+1,r,c+1) ||
        helperFunc(board,word,m+1,r,c-1) ||
        helperFunc(board,word,m+1,r-1,c) ||
        helperFunc(board,word,m+1,r+1,c);
        board[r][c] = temp;
        return found;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i = 0; i<board.size(); i++) {
            for(int j = 0; j<board[i].size(); j++){
                if(board[i][j] == word[0]) {
                   if(helperFunc(board,word,0,i,j))
                    return true;
                }
            }
        }
        return false;
    }
};
