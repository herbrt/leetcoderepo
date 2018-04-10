class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size()) return 0;        
        string sub;
        int res = 0;
        int tmp = 0;
        for(int i = 0; i<s.size(); i++)
        {
            char c = s[i];
            for(int j = 0; j<sub.size(); j++){
                if(c == sub[j]){
                    sub.erase(0,j+1);
                    break;
                }
            }
            //sub.append(c);
            sub += c;
            tmp = sub.size();
            if(tmp>res) res = tmp;
        }
        return res;
    }
};
