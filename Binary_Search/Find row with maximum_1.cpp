class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int i = 0, j = arr.size() - 1;
        int maxirow = -1;
        while(i < arr.size() && j >= 0) {
            if(arr[i][j] == 1) {
                maxirow = i;
                j--;
                
            }
            else
                i++;
        }
        return maxirow;
    }
};
