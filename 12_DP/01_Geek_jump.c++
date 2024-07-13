//Recursion : 
class Solution {
  public:
    int solve(int n, vector<int>& height){
        if(n == 0){
            return 0;
        }
        if(n < 0){
            return 0;
        }
        
        int oneStep = abs(height[n] - height[n-1]) + solve(n-1, height);
        int twoStep = abs(height[n] - height[n-2]) + solve(n-2, height);
        
        return min(oneStep, twoStep);
    }
    
    int minimumEnergy(vector<int>& height, int n) {
        int ans = solve(n-1, height);
        return ans;
    }
};

// Memoization
class Solution {
  public:
    int solve(int n, vector<int>& height, vector<int>& dp){
        if(n == 0){
            return 0;
        }
        
        if(dp[n] != -1)return dp[n];
        
        int oneStep = abs(height[n] - height[n-1]) + solve(n-1, height, dp);
        int twoStep = INT_MAX;
        if(n > 1)
        twoStep = abs(height[n] - height[n-2]) + solve(n-2, height, dp);
        
        return dp[n] = min(oneStep, twoStep);
    }
    
    int minimumEnergy(vector<int>& height, int n) {
        
        if(n == 1){
            return 0;
        }
        
        vector<int>dp(n, -1);
        
        solve(n-1, height, dp);
        
        return dp[n-1];
    }
};

//Tabulation
int minimumEnergy(vector<int>& height, int n) {
        
        if(n == 1){
            return 0;
        }
        
        vector<int>dp(n, -1);
        
        dp[0] = 0;
        
        for(int i=1; i<n; i++){
            
            int oneStep = abs(height[i] - height[i-1]) + dp[i-1];
            int twoStep = INT_MAX;
            if(i>1)
            twoStep = abs(height[i] - height[i-2]) + dp[i-2];
            
            dp[i] = min(oneStep, twoStep);
        }
        
        return dp[n-1];
    }
};

//Space Optimisation
    int minimumEnergy(vector<int>& height, int n) {
        
        if(n == 1){
            return 0;
        }
        
        
        int prev = 0;
        int prev2 = 0;
        
        for(int i=1; i<n; i++){
            
            int oneStep = abs(height[i] - height[i-1]) + prev;
            int twoStep = INT_MAX;
            if(i>1)
            twoStep = abs(height[i] - height[i-2]) + prev2;
            
            int curr = min(oneStep, twoStep);
            
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
};