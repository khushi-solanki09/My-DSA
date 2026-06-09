class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // approach 1 ----->  space : O(n2)
        // vector<int> rows;
        // vector<int> cols;

        // // Step 1: Find all rows and columns to be zeroed
        // for (int i = 0; i < matrix.size(); i++) {
        //     for (int j = 0; j < matrix[i].size(); j++) {
        //         if (matrix[i][j] == 0) {
        //             rows.push_back(i);
        //             cols.push_back(j);
        //         }
        //     }
        // }

        // // Step 2: Set columns to zero
        // for (int i = 0; i < cols.size(); i++) {
        //     int col = cols[i];
        //     for (int j = 0; j < matrix.size(); j++) {
        //         matrix[j][col] = 0;
        //     }
        // }

        // // Step 3: Set rows to zero
        // for (int i = 0; i < rows.size(); i++) {
        //     int row = rows[i];
        //     for (int j = 0; j < matrix[0].size(); j++) {
        //         matrix[row][j] = 0;
        //     }
        // }
        // approach 2 ----- space - O(1)
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstrow = false;
        bool firstcol = false;
        for(int i = 0; i < n; i++) {
          if(matrix[0][i] == 0) {
            firstrow = true;
          }
        }
        for(int i = 0; i < m; i++) {
          if(matrix[i][0] == 0) {
            firstcol = true;
          }
        }
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < m; i++) {
            if(matrix[i][0] == 0) {
                for(int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; i++) {
            if(matrix[0][i] == 0) {
                for(int j = 1; j < m; j++) {
                    matrix[j][i] = 0;
                }
            }
        }
        if(firstrow){
            for(int i = 0; i<n; i++) matrix[0][i] = 0;
        }
        if(firstcol) {
            for(int j = 0; j<m; j++) matrix[j][0] = 0;
        }
    }
};
