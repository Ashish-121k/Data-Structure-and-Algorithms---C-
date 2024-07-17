class Solution{   
public:
    bool solve(int i, int sum, vector<int>& arr){
        if(sum == 0) return true;
        if(i == 0) return (arr[0] == sum);
        
        bool notTake = solve(i-1, sum, arr);
        
        bool take = false;
        if(arr[i] <= sum)
            take = solve(i-1, sum - arr[i], arr);
            
        return take | notTake;
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        return solve(n-1, sum, arr);
    }
};

// Memoization 
class Solution{   
public:
    bool solve(int i, int sum, vector<int>& arr, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(i == 0) return (arr[0] == sum);
        
        if(dp[i][sum] != -1) return dp[i][sum];
        
        bool notTake = solve(i-1, sum, arr, dp);
        
        bool take = false;
        if(arr[i] <= sum)
            take = solve(i-1, sum - arr[i], arr, dp);
            
        return dp[i][sum] = take | notTake;
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        
        int n = arr.size();
        
        vector<vector<int>>dp(n, vector<int>(sum + 1, -1));
        
        return solve(n-1, sum, arr, dp);
        
        
    }
};

//Tabulation
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        
        int n = arr.size();
        
        vector<vector<bool>>dp(n, vector<bool>(sum + 1, 0));
        
        for(int i=0; i<n; i++) dp[i][0] = true;
        dp[0][arr[0]] = true;
        
        for(int i=1; i<n; i++){
            
            for(int j = 1; j <= sum; j++){
                
                bool notTake = dp[i-1][j];
                
                bool take = false;
                
                if(arr[i] <= j){
                    take = dp[i-1][j - arr[i]];
                }
                
                dp[i][j] = notTake || take;
            }
            
        }
        
        return dp[n-1][sum];
    }
};