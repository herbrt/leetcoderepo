class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0) return true;
        if(x < 0||x%10==0) return false;
        int n = x,res = 0;
        while(n>res){
            res = res*10+n%10;
            n /= 10;
            cout<<res<<endl;
        }
        cout<<res<<endl;
        if(res/10 == n||res == n)
            return true;

        return false;
    }
};
