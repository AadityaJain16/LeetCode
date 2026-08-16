class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
                int xorn=0;
        bool NonZero = false;

        for (int x : nums) {
            xorn^= x;

            if (x != 0) {
                NonZero = true;
            }
        }

        if (xorn != 0) {
            return nums.size();
        }

        if (NonZero) {
            return nums.size() - 1;
        }

        return 0;

    }
};