class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double mxsum=0;
       int n=nums.size();
       double sum=0;
       for(int i=0;i<k;i++)
       {
        sum+=nums[i];
       }

        mxsum=sum;
        for(int i=k;i<n;i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];
            mxsum=max(sum,mxsum);
            
        }
        return mxsum/k;
    }
};