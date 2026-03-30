class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>charcount;
        for(char c : s){
            charcount[c]++;
        }
        for(char c : t){
            charcount[c]--;
            if(charcount[c]<0){
                return false;
            }
        }

        return true;
        
    }
};
