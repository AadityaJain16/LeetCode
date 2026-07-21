class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
       int n = s.length();
        int one = count(begin(s), end(s), '1');

        vector<int> zeros;
        int i = 0;
        while(i < n) {
            if(s[i] == '0') {
                int start = i;
                while(i < n && s[i] == '0') i++;

                zeros.push_back(i-start);
            } else {
                i++;
            }
        }

        int maxi = 0;
        for(int i = 1; i < zeros.size(); i++) {
            maxi = max(maxi, zeros[i] + zeros[i-1]);
        }

        return maxi + one;
  
    }
};