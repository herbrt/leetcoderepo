class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int mx = 0, id = 0, max = 0, index;
        string res = "#";
        for(int i = 0; i < s.length(); i++){
            res = res+s[i]+"#";
        }
        res += "#";
        int p[res.length()] = {1};
        for(int i = 1; i<res.length()-1; i++){
            if(i<mx){
                p[i] = mx-i>p[2*id-i]?p[2*id-i]:mx-i;
            }
            else
                p[i] = 1;
            while(res[i+p[i]]==res[i-p[i]]) p[i]++;
            if(i+p[i]>mx){
                mx = i+p[i];
                id = i;
            }
        }
        for(int i = 0; i < res.length()-1; i++)
            if(p[i]>max){
                max = p[i];
                index = i;
            }
        cout<<res<<endl;
        cout<<max<<" "<<index;
        return s.substr((index-max+1)/2,max-1);
    }   
};
