//Memoization 
class Solution
{
    public:
    
    int solve(int i, int W, int val[], int wt[], vector<vector<int>>& dp){
        if(i == 0){
            if(W >= wt[i]) return dp[i][W] = val[i];
            return 0;
        }
        
        if(dp[i][W] != -1) return dp[i][W];
        
        int notTake = solve(i-1, W, val, wt, dp);
        
        int take = INT_MIN;
        
        if(W >= wt[i]){
            take = val[i] + solve(i-1, W-wt[i], val, wt, dp);
        }
        
        return dp[i][W] = max(take, notTake);
    }
    
    int knapSack(int W, int wt[], int val[], int n){ 
        
        vector<vector<int>>dp(n, vector<int>(W+1, -1));
        return solve(n-1, W, val, wt, dp);
    }
};