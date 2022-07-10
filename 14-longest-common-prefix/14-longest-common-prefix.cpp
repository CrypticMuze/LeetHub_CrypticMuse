class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalString = strs[0];
        int flag1, flag2;
        for(int i = 1; i < strs.size(); i++){
            flag1 = 0;
            flag2 = 0;
            string prefix = "";
            while(flag1 < strs[i - 1].size() && flag2 < strs[i].size() && strs[i - 1][flag1] == strs[i][flag2])
            {
                prefix += strs[i - 1][flag1];
                flag1++;
                flag2++;
            }
            if(prefix.size() <= finalString.size())
                finalString = prefix;
        }
        return finalString;
    }
};