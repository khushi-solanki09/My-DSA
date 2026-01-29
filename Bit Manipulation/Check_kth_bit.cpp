class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        if(n <= 0) return false;
        return (n & (1 << k)) != 0;
    }
};
