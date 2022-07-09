class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romVals = {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        int value = 0;
        for(int i = 0; i < s.length(); i++){
            if(romVals[s[i+1]] <= romVals[s[i]])  value += romVals[s[i]]; 
            else  value -= romVals[s[i]];  
        }
    return value;
    }
};