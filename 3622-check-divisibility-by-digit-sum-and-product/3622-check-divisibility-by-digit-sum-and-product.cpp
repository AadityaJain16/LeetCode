class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0;
        int prod=1;
        while(n>0)
        {
            int r =n%10;
            sum+=r;
            prod*=r;
            n/=10;
        }
        return x%(sum+prod)==0;
    }
};