class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int index = 0;
        if(strs.empty()) return "";
        if(strs.size() == 1) return strs[0];
        for(int i = 0; i < strs.size(); i++)
            if(strs[i].empty())
                return "";
        while(index>=0){
            for(int i = 1; i < strs.size(); i++)
                if(strs[i][index]!=strs[0][index]) return res;
            res += strs[0][index];
            index++;
        }
    }
};
