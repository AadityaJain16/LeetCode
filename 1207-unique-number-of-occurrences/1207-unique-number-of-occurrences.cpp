class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr)
        {
            mp[x]++;
        
        }
        unordered_set<int>st;
        for(auto m:mp)
        {
            st.insert(m.second);
        }
        if(mp.size()==st.size()) return true;
        return false;
    }
};