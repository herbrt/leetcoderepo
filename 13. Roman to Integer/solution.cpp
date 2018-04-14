class Solution {
public:
    
    int roman(char s){
        switch(s){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
        
    }
    
    int romanToInt(string s) {
        int res = 0;
    
        while(!s.empty()){
            if(roman(s[0])<roman(s[1]))
                res -= roman(s[0]);
            else
                res += roman(s[0]);
            s.erase(0,1);
        }
        return res;
    }
};
