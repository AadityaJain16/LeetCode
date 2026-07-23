class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
      int n = nums.size();
      if(n<=2) return n;
      int ans=1;
      for(auto x:nums)
      {
        ans|=x;
      }   
      return ans+1;
    }
};