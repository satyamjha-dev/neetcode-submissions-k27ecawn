class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,res=0,maxfeq=0;
        unordered_map<char ,int> has;
       for(int r=0;r<s.size();r++){
            has[s[r]]++;
            maxfeq = max(maxfeq,has[s[r]]);
            while((r-l+1)- maxfeq > k){
                has[s[l]]--;
                l++;
                
            }
            res = max(res,r-l+1);

        }

        return res;

        
    }
};
