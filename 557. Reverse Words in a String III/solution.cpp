class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string res;
        string tmp;
        for(char ch : s){
            if(ch != ' '){
                tmp.push_back(ch);
            }
            else{
                for(int i = tmp.size()-1; i >= 0; i--){
                    res.push_back(tmp[i]);
                }
                res.push_back(' ');
                tmp.clear();
            }
        }
        res.pop_back();
        return res;
    }
};
