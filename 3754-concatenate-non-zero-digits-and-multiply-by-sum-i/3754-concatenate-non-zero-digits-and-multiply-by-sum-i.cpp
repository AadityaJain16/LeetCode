class Solution {
public:
    long long sumAndMultiply(int n) {
        string num = to_string(n);
        string ans = "";
        long long sum = 0;

        for (char x : num) {
            if (x != '0') {
                ans += x;
                sum += x - '0';
            }
        }

        if (ans.empty())
            return 0;

        long long result = stoll(ans);

        return sum * result;
    }
};