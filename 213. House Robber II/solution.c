int max(int x, int y, int z)
{
    int tmp;
    tmp = x>y?x:y;
    tmp = tmp>z?tmp:z;
    return tmp;
}

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int dp[n+10],dp2[n+10];
        if(n < 1)
            return 0;
        if(n < 2)
            return nums[0];
        if(n < 3)
            return nums[0]>nums[1]?nums[0]:nums[1];
        if(n == 3)
            return max(nums[0],nums[1],nums[2]);
        if(n == 4)
            return max((nums[0]+nums[2]),(nums[1]+nums[3]));
        dp[0] = nums[0];
        dp[1] = nums[0]>nums[1]?nums[0]:nums[1];
        dp[2] = (nums[0]+nums[2])>nums[1]?(nums[0]+nums[2]):nums[1];
        
        for(int i = 3; i < n-1; i++)
        {
            dp[i] = max(dp[i-1],(nums[i]+dp[i-2]),(nums[i]+dp[i-3]));
        }
        
        dp2[1] = nums[1];
        dp2[2] = nums[1]>nums[2]?nums[1]:nums[2];
        dp2[3] = (nums[1]+nums[3])>nums[2]?(nums[1]+nums[3]):nums[2];
        
        
        for(int i = 4; i < n; i++)
        {
            dp2[i] =  max(dp2[i-1],(nums[i]+dp2[i-2]),(nums[i]+dp2[i-3]));
        }
        for(int i = 0; i < n-1; i++)
            cout<<dp[i]<<" ";
        for(int i = 1; i < n; i++)
            cout<<dp2[i]<<" ";
        return dp[n-2]>dp2[n-1]?dp[n-2]:dp2[n-1];
    }
};
