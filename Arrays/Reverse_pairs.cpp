class Solution {
public:
    long long countPairs(vector<int>& nums, int low, int mid, int right) {
        long long cnt = 0;
        int j = mid + 1;
        for(int i = low; i<=mid; i++) {
            while(j <= right && nums[i] > 2LL * nums[j]) {
                j++;
            }
            cnt += j - (mid + 1);
        }
        return cnt;
    }
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while(left <= mid && right <= high) {
            if(nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
    long long mergeSort(vector<int>& nums, int low, int high) {
        if(low >= high) return 0;
        int mid = low + (high - low) / 2;
        long long cnt = 0;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        long long cnt = 0;
        cnt += mergeSort(nums,0,high);
        return cnt;
    }
};

