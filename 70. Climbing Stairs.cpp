// https://leetcode.com/problems/climbing-stairs/
// Kartik Kumar

class Solution {
public:
    int solve(int n, vector<int> &dp){
        if(n==1 || n == 0) return 1;
        if(dp[n] != -1) return dp[n];
        // two choices 
            // 1) Move one step
            int oneStep = solve(n-1, dp);

            // 2) Move two step
            int twoStep = solve(n-2, dp);
        return dp[n] = oneStep + twoStep;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
        
    }
};
