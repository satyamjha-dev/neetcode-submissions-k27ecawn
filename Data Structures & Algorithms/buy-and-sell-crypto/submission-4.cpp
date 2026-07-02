class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int l=0 , r = 1;
        int maxprofit =0;

        while(r<=n-1){
            if(arr[l]<arr[r]){
                int profit =arr[r]-arr[l];
                maxprofit = max(maxprofit,profit);
              
            }else {
                l=r;
            }
            r++;
        }
        return maxprofit;

        
        
        
        
        
    }
};
