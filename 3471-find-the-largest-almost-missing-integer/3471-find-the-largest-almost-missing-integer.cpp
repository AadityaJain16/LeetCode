class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=-1;
        unordered_map<int, int> mp;
        if(n==k) 
        return *max_element(nums.begin(), nums.end());

        else{

            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }

            if(k==1){
                for(auto m: mp){
                    if(m.second==1){
                        ans=max(ans, m.first);
                    }
                }
                return ans;
            }

            int ffq=mp[nums[0]];
            int lfq=mp[nums[n-1]];
            if(ffq==1 && lfq==1) return max(nums[0], nums[n-1]);
            else if(ffq==1) return nums[0];
            else if(lfq==1) return nums[n-1];
        }
        return -1;
    }
};