class Solution {
public:
    int monkeyMove(int n) {
        long long mod = 1e9+7;
        long long ans  = 1;
        long long x = n;
        long long b = 2;
        while(x>0){
            if(x&1){
                ans = (ans*b) % mod;
            }
            b = (b * b) % mod;
            x>>=1;  
        }

        return (ans - 2 + mod) % mod;
    }
};
