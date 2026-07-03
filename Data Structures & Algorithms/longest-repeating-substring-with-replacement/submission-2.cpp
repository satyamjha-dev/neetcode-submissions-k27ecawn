class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,res=0,maxfeq=0;
        unordered_map<char ,int> has;
        while(r<s.size()){
            has[s[r]]++;
            maxfeq = max(maxfeq,has[s[r]]);
            while((r-l+1)- maxfeq > k){
                has[s[l]]--;
                l++;
                
            }
            res = max(res,r-l+1);
            r++;

        }

        return res;

        
    }
};
