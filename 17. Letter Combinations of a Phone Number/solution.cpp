class Solution {
public:
    vector<string> v = {{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}};
    vector<string> res;
    string tmp;

    void oper(int index,string digits){
        string s;////////////////////这是神魔咧
        s +=digits.at(index);////////////神魔咧
        int n = atoi(s.c_str())-2;///////////咧
        for(int i = 0; i < v[n].size(); i++){
            tmp += v[n][i];
            if(index == digits.size()-1){
                res.push_back(tmp);
                tmp.pop_back();
            }
            else{
                oper(index+1, digits);
                tmp.pop_back();
            }
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        oper(0,digits);
        return res;
    }
   
};
