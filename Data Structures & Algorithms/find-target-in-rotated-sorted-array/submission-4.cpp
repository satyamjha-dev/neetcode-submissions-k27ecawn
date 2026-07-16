class Solution {
public:
    int reccursionsearch(vector<int>& nums, int target,int s,int e){
         while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }if(nums[s]<=nums[mid]){
                if(nums[s]<= target && target<=nums[mid]){
                    return reccursionsearch(nums,target,s,mid-1);
                }else{
                    return reccursionsearch(nums,target,mid+1,e);
                }
            }else{
                if(nums[mid]<=target && target <= nums[e]){
                    return reccursionsearch(nums,target,mid+1,e);
                }else{
                   return reccursionsearch(nums,target,s,mid-1);
                }
            }
        }
        return -1;

    }
    int search(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        return reccursionsearch(nums,target,low,high);

    }
};
