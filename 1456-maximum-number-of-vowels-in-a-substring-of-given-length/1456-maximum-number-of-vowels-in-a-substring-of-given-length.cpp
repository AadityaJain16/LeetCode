class Solution {
public:
bool isvowel(char c)
{
    return string("AEIOUaeiou").find(c)!=string::npos;
}
    int maxVowels(string s, int k) {
        int curcount=0;
        int n=s.length();
        for(int i=0;i<k;i++)
        {
            if(isvowel(s[i]))
            {
                curcount++;
            }
        }
        int mxcount=curcount;
        for(int i=k;i<n;i++)
        {
            if(isvowel(s[i-k]))
            {
                curcount--;
            }
            if(isvowel(s[i]))
            {
                curcount++;
            }
            mxcount=max(mxcount,curcount);
        }
        return mxcount;
    }
};