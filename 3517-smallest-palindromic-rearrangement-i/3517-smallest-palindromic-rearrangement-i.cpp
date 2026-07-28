class Solution {
public:
    string smallestPalindrome(string s) {
          int n = s.size();
        string ans (n,' ');
      
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int l = 0;
        int r = n - 1;
        for (auto &m : mp) {
            while (m.second >= 2) {
                ans[l] = m.first;
                l++;
                ans[r] = m.first;
                r--;
                m.second-=2;
            }
        }
        for(auto &p:mp)
        {
            if(p.second==1)
            {
                ans[l]=p.first;
                break;
            }
        }
        return ans;
    }
};