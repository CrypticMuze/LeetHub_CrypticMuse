class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int summ=0, n = nums.size();
        int max_sum = INT_MIN;
        for(int i=0;i<n;++i){
            summ += nums[i];
            summ = max(summ,nums[i]);
            max_sum = max(summ,max_sum);
        }
        return max_sum;
    }
};