//Memoization

class Solution{
  public:
    int solve(int i, int N, int price[], vector<vector<int>>& dp){
        if(i == 0){
            return price[0] * N;
        }
        
        if(dp[i][N] != -1) return dp[i][N];
        
        int notTake = solve(i-1, N, price, dp);
        int take = INT_MIN;
        int rodLength = i+1;
        if(rodLength <= N)
            take = price[i] + solve(i, N-rodLength, price, dp);
            
        return dp[i][N] = max(notTake, take);
        
    }
    
    int cutRod(int price[], int n) {
        if(n == 1){
            return price[0];
        }
        
        vector<vector<int>>dp(n, vector<int>(n+1, -1));
        solve(n-1, n, price, dp);
        return dp[n-1][n];
    }
};

//Tabulation
class Solution{
  public:
    
    int cutRod(int price[], int n) {
        if(n == 1){
            return price[0];
        }
        
        vector<vector<int>>dp(n, vector<int>(n+1, 0));
        
        for(int j=0; j<=n; j++){
            dp[0][j] = price[0] * j;
        }
        
        for(int i=1; i<n; i++){
            for(int j=0; j<=n; j++){
                
                int notTake = dp[i-1][j];
                int take = INT_MIN;
                int rodLength = i+1;
                if(rodLength <= j)
                    take = price[i] + dp[i][j-rodLength];
                    
                dp[i][j] = max(notTake, take);
            }
        }
        return dp[n-1][n];
    }
};

//Space Optimization
class Solution{
  public:
    
    int cutRod(int price[], int n) {
        if(n == 1){
            return price[0];
        }
        
        vector<int>prev(n+1, 0), curr(n+1, 0);
        
        for(int j=0; j<=n; j++){
            prev[j] = price[0] * j;
        }
        
        for(int i=1; i<n; i++){
            for(int j=0; j<=n; j++){
                
                int notTake = prev[j];
                int take = INT_MIN;
                int rodLength = i+1;
                if(rodLength <= j)
                    take = price[i] + curr[j-rodLength];
                    
                curr[j] = max(notTake, take);
            }
            prev = curr;
        }
        return prev[n];
    }
};