class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            ans+=to_string(strs[i].length())+"#"+strs[i];
           
        }

        return ans;

    }

    vector<string> decode(string s) {
         vector<string> ans;
         int i = 0;
        while(i < s.length())

    {

        string num = "";

        while(s[i] != '#')

        {

            num += s[i];

            i++;

        }

        int len = stoi(num);

        i++;

        string word = s.substr(i, len);

        ans.push_back(word);

        i = i + len;

    }

        return ans;

    }
  
};
