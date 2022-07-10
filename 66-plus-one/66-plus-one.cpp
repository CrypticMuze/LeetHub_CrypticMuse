class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int numLen = digits.size();
        if (digits[numLen - 1] != 9){
            int temp = digits[numLen-1];
            digits.pop_back();
            digits.push_back(temp+1);
            return digits;
        } else{
            digits[numLen-1] = 0;
            for (int i=1; i<digits.size();i++){
                if (digits[numLen-1-i]!=9){
                    digits[numLen-1-i] +=1;
                    break;
                } else digits[numLen-1-i] = 0;
            }
        }
        if (digits[0] == 0){
            digits.push_back(1);
            std::rotate(digits.rbegin(), digits.rbegin() + 1, digits.rend());
        }
        return digits;  
    }
};