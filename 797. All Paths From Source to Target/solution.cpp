class Solution {//参考了discuss当中的代码，使用了递归，非常简洁
public:
    void bfs(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int> ans, int rsc, int dst){
        ans.push_back(rsc);
        if(rsc == dst){
            res.push_back(ans);
            return;
        }
        for(int i = 0; i < graph[rsc].size(); i++){
            bfs(graph, res, ans, graph[rsc][i], dst);
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> ans;
        int num = graph.size();
        if(num == 0) return res;
        bfs(graph, res, ans, 0, num-1);
        return res;
    }
};

/*
class Solution {//我自己的代码，思路是用栈实现dfs回溯，但是会出现重复路径
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int size = graph.size();
        vector<vector<int>> res;
        //stack<int> s;
        vector<int> ans;
        int st[size], j;
        //会出现重复路径
        for(int k = 0; k < size; k++)
            st[k] = -1;
        //s.push(0);
        ans.push_back(0);
        
        while(!ans.empty()){
            
            //int tmp = s.top();
            int tmp = ans.back();
            for(j = 0; j<graph[tmp].size(); j++){
                if(st[graph[tmp][j]]!=tmp){
                    if(graph[tmp][j]!=(size-1)){
                        //s.push(graph[tmp][j]);
                        //st[j] = tmp;//错在这里 我透透透透
                        st[graph[tmp][j]] = tmp;
                        ans.push_back(graph[tmp][j]);
                        break;//其实这里用个递归挺好
                    }
                    else{//保存结果ans
                        ans.push_back(size-1);
                        res.push_back(ans);
                        //s.pop();
                        st[graph[tmp][j]] = tmp;
                        ans.pop_back();
                        break;//还有这里
                    }
                }     
            }  
            if((j>=graph[tmp].size())){
                //s.pop();
                ans.pop_back(); 
            }
        }

        return res;
    }
};
*/
