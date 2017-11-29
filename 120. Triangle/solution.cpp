#define min(x,y) x<y?x:y

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> tmp;
        vector<int> res;
        if(triangle.size() == 0)
            return 0;
        if(triangle.size() == 1)
        {
            tmp = triangle.back();
            return tmp[0];
        }
        
        
        
        res = triangle.back();
        triangle.pop_back();
        
        tmp = triangle.back();
        if(tmp.size()>=res.size());
            while(res.size()<=tmp.size())
                res.push_back(0);
        for(int i = 0; i < (res.size()); i++)
            cout<<res[i]<<" ";
            cout<<endl;
        while(!triangle.empty())
        {
            tmp = triangle.back();
            triangle.pop_back();
            for(int i = 0; i < (res.size()-1); i++)
            {
                int min = min(res[i],res[i+1]);
                res[i] = min + tmp[i];
            }
            
            res.pop_back();
        }
        return res[0];
    }
};
