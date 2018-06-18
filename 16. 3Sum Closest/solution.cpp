class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = INT_MAX;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i:nums)
            cout<<nums[i]<<" ";
        cout<<endl;
        int tmp,left,right,sub,ans;
        for(int i = 0; i<n-2; i++){
            if(nums[i]==nums[i-1]&&i>0) continue;
            tmp = target-nums[i];
            left = i+1; right = n-1;
            while(left<right){
                int sub = tmp-(nums[left]+nums[right]);
                if(sub == 0){
                    return target;
                }else if(abs(sub) < abs(res)){
                    res = sub;
                    ans = nums[left]+nums[right]+nums[i];
                    while(sub>0&&nums[left]==nums[left+1]) left++;
                    while(sub<0&&nums[right]==nums[right-1]) right --;     
                    if(sub > 0){
                        left++;
                    }else if(sub < 0){
                        right--;
                    }
                }else if(sub > 0){
                        left++;
                }else if(sub < 0){
                        right--;
                }
            }
        }
        return ans;
    }
};
