class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int n=arr.size();
        int maxi=arr[n-1];
        vector<int>vec;
        if(n==0)return vec;
        vec.push_back(maxi);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxi){
                vec.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(vec.begin(),vec.end());
       
        return vec;
    }
};
