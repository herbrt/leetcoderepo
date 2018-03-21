class Solution {
public:
    bool judgeCircle(string moves) {
        int res = 0;
        for(char ch : moves){
            if(ch == 'R' || ch == 'U') res++;
            else res --;
        }
        return res == 0;
    }
};
