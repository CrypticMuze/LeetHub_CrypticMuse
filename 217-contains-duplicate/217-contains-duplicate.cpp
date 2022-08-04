class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> mp;
        for(auto i:nums){
            ++mp[i];
            if(mp[i] > 1) return true;
        }
        return false;
    }
};