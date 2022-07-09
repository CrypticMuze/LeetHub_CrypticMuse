class Solution {
public:
    
    vector<int> digits;
    bool isPalindrome(int x) {
        if (x<0) return false;
        while (x>0){
            int y = x%10;
            x = x/10;
            digits.push_back(y);
        }
        int size = digits.size();
        for(int i=0;i<size;i++){
            if(digits[i] == digits[size-1-i]) continue;
            else return false;
        }
        return true;
    }
};