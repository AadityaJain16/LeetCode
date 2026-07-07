class Solution {
public:
    string reverseWords(string s) {
    reverse(s.begin(), s.end());
        int n = s.size();
        int start = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }
        int Pos = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == ' ') { i++; continue; }
            if (Pos != 0) s[Pos++] = ' ';
            while (i < n && s[i] != ' ') {
                s[Pos++] = s[i++];
            }
        }

        s.resize(Pos);
        return s;
    }
};