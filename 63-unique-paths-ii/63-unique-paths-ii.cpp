class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>> grid, vector<vector<int>> &dp){
        if(i>m || j>n || grid[i][j] == 1 || grid[m][n] == 1) return 0;
        if(i==m && j==n) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        
        int right = solve(i+1,j,m,n, grid,dp);
        int down = solve(i,j+1,m,n, grid,dp);
        return dp[i][j] = right + down;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(0,0,m-1,n-1,obstacleGrid,dp);
    }
};