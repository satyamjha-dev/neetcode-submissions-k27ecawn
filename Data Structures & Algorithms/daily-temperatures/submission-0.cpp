class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector <int> result;
        for(int i=0;i<arr.size();i++){
            int c = 1;
            int j=i+1;
            while(j<arr.size()){
                if(arr[j]>arr[i]){
                    break;
                }
                j++;
                c++;
                
            }
            if(j==arr.size()){
                c=0;
            }

            result.push_back(c);
            

        }

        return result;
        
        
    }
};
