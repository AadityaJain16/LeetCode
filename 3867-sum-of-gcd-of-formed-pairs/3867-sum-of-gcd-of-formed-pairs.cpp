class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int premax=0;
        int n=nums.size();
        vector<int>pgcd(n);
        for(int i=0;i<n;i++)
        {
            premax=max(nums[i],premax);
            pgcd[i]=gcd(nums[i],premax);
        }
        sort(pgcd.begin(),pgcd.end());
        int r=n-1;
        int l=0;
        long long ans=0;
        while(l<r)
        {
            ans+=gcd(pgcd[r],pgcd[l]);
            l++;
            r--;
        }
        return ans;

    }
};