class Solution {
public:
    int numTrees(int n) {
        /*
        long long a = 2*n , b = n, t1 = 1, t2 = 1, res;
        while(a){
            t1 *= a; a--;
        }  
        while(b){
            t2 *= b; b--;
        }
        t2 = t2*t2*(n+1); 
        res = t1/t2; 
        return (int)res;
        */
        long long res[100];
        res[0] = 1;
        res[1] = 1;
        for(int i = 2; i <= n; i++)
        {
            res[i] = 2*(2*(i-1)+1)*res[i-1]/(i-1+2);
        }
        return (int)res[n];
    }
};
