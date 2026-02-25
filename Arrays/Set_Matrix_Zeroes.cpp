class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows;
        vector<int> cols;

        // Step 1: Find all rows and columns to be zeroed
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        // Step 2: Set columns to zero
        for (int i = 0; i < cols.size(); i++) {
            int col = cols[i];
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][col] = 0;
            }
        }

        // Step 3: Set rows to zero
        for (int i = 0; i < rows.size(); i++) {
            int row = rows[i];
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0;
            }
        }
    }
};
