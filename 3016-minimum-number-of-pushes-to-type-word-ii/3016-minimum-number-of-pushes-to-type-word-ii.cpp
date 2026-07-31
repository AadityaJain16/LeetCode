class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto c:word)
        {
            mp[c]++;
        }
        vector<int>freq;
        for(auto m:mp)
        {
            freq.push_back(m.second);
        }
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());

        int ans=0;
        int n=freq.size();
        for(int i=0;i<n;i++)
        {
            ans+=(i/8+1)*freq[i];
        }
        return ans;
    }
};