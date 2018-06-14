class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > v;
        vector<int> tmp;
        int N = nums.size();
        if(N<3) return v;
        sort(nums.begin(),nums.end());
        int n = N;
        for(int i = 0; i < n-2; i++){
            if(nums[i]>0)
                break;
            else{
                for(int j = i+1; j < n-1; j++){
                    int m = nums[i]+nums[j];
                    int low = j+1, high = n-1;
                    int mid;
                    while(low<=high){
                        mid = (low+high)/2;
                        if(nums[mid]==-m){
                            v.push_back({nums[i],nums[j],nums[mid]});
                            while(nums[j]==nums[j+1]&& j<n-1) j++;
                            while(nums[i]==nums[i+1]&& i<n-2) i++;
                            break;
                        }else if(nums[mid]<-m){
                            low = mid+1;
                        }else{
                            high = mid-1;
                        }
                    }
                }
            }
        }

        return v;
    }
};
