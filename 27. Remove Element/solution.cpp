class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int res = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                nums[index] = nums[i];
                index++;
            }else{
                res--;
            }
        }
        return res;
    }
};
