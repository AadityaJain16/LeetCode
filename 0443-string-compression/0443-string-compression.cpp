class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        int i = 0;

        while (i < chars.size()) {
            char ch = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }

            res += ch;
            if (count > 1)
                res += to_string(count);
        }

        for (int j = 0; j < res.size(); j++)
            chars[j] = res[j];

        return res.size();
    }
};