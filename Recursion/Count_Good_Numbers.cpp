class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long helper (long long base , long long expo,long long mod){
        if(expo == 0) return 1;
        long long half = helper(base,expo/2,mod);
        half = (half * half) % mod;
        if(expo % 2 == 1) {
            half = (half * base) % mod;
        }
        return half;
    }
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long half1 = helper(5,even,MOD);
        long long half2 = helper(4,odd,MOD);
        return (half1 * half2) % MOD;
    }
};
