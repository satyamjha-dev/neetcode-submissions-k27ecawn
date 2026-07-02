class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        vector <int> result;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    result.push_back((arr[j]-arr[i]));
                }else{
                    continue;
                }

            }
            

        }
        if(result.size()>0){
            return *max_element(result.begin(), result.end());
        }else{
            return 0;
        }
        
        

        
    }
};
