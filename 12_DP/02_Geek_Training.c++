//Memoization

class Solution {
  public:
    int solve(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp){
        
        if(day == 0){
            int maxi = 0;
            for(int i=0; i<3; i++){
                if(i != last)
                maxi = max(maxi, points[day][i]);
            }
            return maxi;
        }
        
        if(dp[day][last] != -1) return dp[day][last];
        
        int maxi = 0;
        
        for(int i=0; i<3; i++){
            if(i != last){
                int meriPoint = points[day][i] + solve(day-1, i, points, dp);
                
                maxi = max(maxi, meriPoint);
            }
        }
        
        return dp[day][last] = maxi;
        
    }
    
    int maximumPoints(vector<vector<int>>& points, int n) {
        
        vector<vector<int>> dp(n, vector<int>(4, -1));
        
        solve(n-1, 3, points, dp);
        
        return dp[n-1][3];
    }
};

//Tabulation 
int maximumPoints(vector<vector<int>>& points, int n) {
        
        vector<vector<int>> dp(n, vector<int>(4, -1));
        
        dp[0][0] = max(points[0][1], points[0][2]);
        dp[0][1] = max(points[0][0], points[0][2]);
        dp[0][2] = max(points[0][0], points[0][1]);
        dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));
        
        for(int day = 1; day<n; day++){
            for(int last = 0; last<4; last++){
                int maxi = 0;
                for(int i=0; i<3; i++){
                    if(i != last){
                        int meriPoint = points[day][i] + dp[day-1][i];
                        maxi = max(maxi, meriPoint);
                    }
                }
                dp[day][last] = maxi;
            }
        }
        
        return dp[n-1][3];
        
    }
};

//Space Optimisation
int maximumPoints(vector<vector<int>>& points, int n) {
        
        vector<int>prev(4, -1);
        
        prev[0] = max(points[0][1], points[0][2]);
        prev[1] = max(points[0][0], points[0][2]);
        prev[2] = max(points[0][0], points[0][1]);
        prev[3] = max(points[0][0], max(points[0][1], points[0][2]));
        
        for(int day = 1; day<n; day++){
            
             vector<int>curr(4,-1);
            
            for(int last = 0; last<4; last++){
                
                int maxi = 0;
                
                for(int i=0; i<3; i++){
                    
                    if(i != last){
                        int meriPoint = points[day][i] + prev[i];
                        maxi = max(maxi, meriPoint);
                    }
                }
                
                curr[last] = maxi;
                
            }
            prev = curr;
            
        }
        
        return prev[3];
        
    }
};