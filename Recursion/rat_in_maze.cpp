class Solution {
  public:
    void helperFunc(int row, int col, vector<vector<int>>& maze, vector<string>& ans, string& path, int n) {
        if(row == n - 1 && col == n - 1){
            ans.push_back(path);
            return;
        }
                maze[row][col] = 0;
      
                    //Down
                    if(row + 1 < n && maze[row + 1][col] == 1){
                    path.push_back('D');
                    helperFunc(row+1,col,maze,ans,path,n);
                    path.pop_back();
                    }
                    
                    //left
                    if(col - 1 >= 0 && maze[row][col - 1] == 1){
                    path.push_back('L');
                    helperFunc(row,col-1,maze,ans,path,n);
                    path.pop_back();
                    }
                    
                    //right
                    if(col + 1 < n && maze[row][col + 1] == 1) {
                    path.push_back('R');
                    helperFunc(row,col+1,maze,ans,path,n);
                    path.pop_back();
                    }
                    
                    //up
                    if(row - 1 >= 0 && maze[row - 1][col] == 1){
                    path.push_back('U');
                    helperFunc(row - 1,col,maze,ans,path,n);
                    path.pop_back();
                    }
                   
            maze[row][col] = 1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        string path;
        helperFunc(0,0,maze,ans,path,maze.size());
        return ans;
    }
};
// NOTE :-> for  lexicographically smallest order : D < L < R < U.
