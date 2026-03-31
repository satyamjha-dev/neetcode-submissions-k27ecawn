class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();

        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++){
            int a = nums[i];
            int p = target -a;
            if(mpp.find(p) != mpp.end()){
                return {mpp[p],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};


        
        
    }
};
