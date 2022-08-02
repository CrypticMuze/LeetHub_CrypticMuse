class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        m--;n--;
        dp[m][n] = 1;
        
        for(int i=m;i>=0;i--){
            for(int j=n;j>=0;j--){
                if(i==m && j==n) continue;
                int right = dp[i+1][j];
                int down = dp[i][j+1];
                dp[i][j] = right + down;
            }
        }
        return dp[0][0];
    }
};