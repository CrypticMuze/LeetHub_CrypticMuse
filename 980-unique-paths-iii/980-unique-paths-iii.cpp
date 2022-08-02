class Solution {
public:
    int ans = 0;
    int empty = 1;
    void dfs(vector<vector<int>>& grid,int i,int j,int count){
        int m = grid.size();
        int n = grid[0].size();
        if(i>=m||j>=n||i<0||j<0||grid[i][j]==-1) return;
        if(grid[i][j]==2){
            if(empty==count) ans++;
            return;
        }
        grid[i][j]=-1;
        dfs(grid,i+1,j,count+1);//right
        dfs(grid,i-1,j,count+1);//left
        dfs(grid,i,j+1,count+1);//up
        dfs(grid,i,j-1,count+1);//down
        grid[i][j]=0;//default
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int temp1,temp2;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (grid[i][j]==1){
                    temp1 = i;
                    temp2 = j;
                } else if(grid[i][j]==0) ++empty;
            }
        }
        dfs(grid,temp1,temp2,0);
        return ans;
    }
};