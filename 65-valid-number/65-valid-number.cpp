class Solution {
public:
    bool isInteger(string s){
        int i=0;
        while(s[i]=='+' || s[i]=='-')
            i++;
        if(i>1 || i==s.length())
            return false;
        while(i<s.length()){
            if(s[i]<'0' || s[i]>'9')
                return false;
            i++;
        }
        return true;
    }

    bool isDecimal(string s){
        int n=s.length();
        int i=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                string s1=s.substr(0,i);
                string s2=s.substr(i+1,n-i-1);
                if(s2.length()>0 && (s2[0]=='+' || s2[0]=='-'))
                    return false;
                if(s1=="+" || s1=="-" || s1.length()==0)
                    return isInteger(s2);
                else if(s2.length()==0)
                    return isInteger(s1);
                return isInteger(s1) && isInteger(s2);
            }
        }
        return isInteger(s);
    }
    
    bool isNumber(string s){
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='e' || s[i]=='E'){
                string s1=s.substr(0,i);
                string s2=s.substr(i+1,n-i-1);
                return isDecimal(s1) && isInteger(s2);
            }
        }
        return isDecimal(s);
    }
};