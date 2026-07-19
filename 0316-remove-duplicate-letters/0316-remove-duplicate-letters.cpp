class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;
        vector<bool>visited(26,false);
        for(char c:s)
        {
            mp[c]++;
        }
        string ans="";
        for(char c:s)
        {
            while(!visited[c-'a']&&!ans.empty()&&ans.back()>c&&mp[ans.back()]>0)
            {
                visited[ans.back()-'a']=false;
                ans.pop_back();
            } 
            mp[c]--;
              if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                ans.push_back(c);
              }

        }
        return ans;
    }
};