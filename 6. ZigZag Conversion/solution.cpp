class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows);
        string res;
        int index = 0, symbol = 1;
        if(numRows == 1) return s;
        for(int i = 0; i<s.size();i++){
            v[index] += s[i];
            symbol == 1?index++:index--;
            if(index == numRows){
                symbol = -1;
                index -= 2;
            }
            else if(index == -1){
                symbol = 1;
                index += 2;
            }
        }
        for(int i = 0; i<numRows;i++)
            res += v[i];
        return res;
    }
};
