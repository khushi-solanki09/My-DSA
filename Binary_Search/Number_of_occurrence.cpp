class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int low = 0, high = arr.size() - 1;
        int start = -1, end = -1;

        while(low <= high) {
            int mid = (low + high) / 2;
            
            if(arr[mid] == target) {
                start = mid;
                high = mid - 1;
            }
            else if(arr[mid] <= target) low = mid + 1;
            else high = mid - 1;
        }
        
        low = 0, high = arr.size()-1;
        
        while(low <= high) {
            int mid = (low + high) / 2;
            if(arr[mid] == target) {
                end = mid;
                low = mid + 1;
            }
            else if(arr[mid] <= target) low = mid + 1;
            else high = mid - 1;
        }
        
        if(start == -1 && end == -1) return 0;
        else
        return end - start + 1;
    }
};
