/*
class Solution {//我自己的代码，思路是用栈实现dfs回溯，但是会出现重复路径
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int size = graph.size();
        vector<vector<int>> res;
        //stack<int> s;
        vector<int> ans;
        int st[size], j;
        /*会出现重复路径
        for(int k = 0; k < size; k++)
            st[k] = -1;
        */
        //s.push(0);
        ans.push_back(0);
        
        while(!ans.empty()){
            
            //int tmp = s.top();
            int tmp = ans.back();
            puts("1");
            for(j = 0; j<graph[tmp].size(); j++){
                if(st[graph[tmp][j]]!=tmp){
                    printf("-%d-\n",st[graph[tmp][j]]);
                    if(graph[tmp][j]!=(size-1)){
                        //s.push(graph[tmp][j]);
                        //st[j] = tmp;//错在这里 我透透透透
                        st[graph[tmp][j]] = tmp;
                        ans.push_back(graph[tmp][j]);
                        puts("2");
                        break;//其实这里用个递归挺好
                    }
                    else{//保存结果ans
                        ans.push_back(size-1);
                        res.push_back(ans);
                        //s.pop();
                        st[graph[tmp][j]] = tmp;
                        ans.pop_back();
                        puts("3");
                        break;//还有这里
                    }
                }     
            }  
            if((j>=graph[tmp].size())){
                //s.pop();
                ans.pop_back(); 
                puts("4");
            }
            puts("5");
        }

        
        return res;
    }
};
*/
