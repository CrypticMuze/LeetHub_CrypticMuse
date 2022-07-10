class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m-1;
        while(j>=0)swap(nums1[j--],nums1[j+n+1]);
        
        
        int i=n;j=0;
        int pointer=0;
        
        while(i<m+n && j<n)
            if(nums1[i]<nums2[j])swap(nums1[i++],nums1[pointer++]);
            else nums1[pointer++]=nums2[j++];
                
        
        while(j<n)nums1[pointer++]=nums2[j++];
    }
};