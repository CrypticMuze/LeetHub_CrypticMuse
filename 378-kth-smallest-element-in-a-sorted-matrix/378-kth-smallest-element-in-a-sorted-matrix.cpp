class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //Priority Queue Implementation
        /*priority_queue<int> pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();*/
        
        //Binary Search Implementation
        int n=matrix.size(),mid,count;        
        int low=matrix[0][0], high=matrix[n-1][n-1];
        while(low<high){
            count=0;
            mid = low + (high-low)/2;
            for(int i=0;i<n;i++){
                count += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
            }
            if(count<k) low=mid+1;
            else high=mid;
        }
        return low;
    }
};