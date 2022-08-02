class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i==m && j==n) return 1;
        if(i>m || j>n) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        int right = solve(i+1,j,m,n,dp);
        int down = solve(i, j+1,m,n,dp);
        
        dp[i][j] = right + down;
        return right + down;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(0,0,m-1,n-1,dp);    
    }
};