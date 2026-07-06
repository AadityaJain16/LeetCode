class Solution {
public:
bool isvowel(char c)
{
    return string("AEIOUaeiou").find(c)!=string::npos;
}
    string reverseVowels(string s) {
        vector<char>v;
        for(char x: s)
        {
            if(isvowel(x))
            {
                v.push_back(x);
            }
        }
    reverse(v.begin(),v.end());
    int vind=0;
    for(int i=0;i<s.length();i++)
    {
        if(isvowel(s[i]))
        {
            s[i]=v[vind++];
        }
    }
    return s;
    }
};