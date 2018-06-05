class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int index = nums[0];
        int res = 1;
        for(int i = 1; i< nums.size(); i++){
            if(nums[i]>index){
                index = nums[i];
                nums[res] = index;
                res ++;
            }
        }
        return res;
    }
};
