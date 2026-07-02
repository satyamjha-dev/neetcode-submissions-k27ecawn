class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int maxz =0;
       

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    int profit = arr[j]-arr[i];
                    maxz = max(maxz,profit);
                }else{
                    continue;
                }

            }
            

        }
        if(maxz>0){
            return maxz;
        }else {
            return 0;
        }
        
        
        
        
        
    }
};
