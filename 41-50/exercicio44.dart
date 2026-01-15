class Solution {
    bool isMatch(String s, String p) {
        int i = 0, j = 0;
        int sIdx = -1;
        int mIdx = 0;
        while (i < s.length) {
            if (j < p.length && (p[j] == s[i] || p[j] == '?')) {
                i++;
                j++;
            } else if (j < p.length && p[j] == '*') {
                sIdx = j;
                mIdx = i;
                j++;
            } else if (sIdx != -1) {
                j = sIdx + 1;
                mIdx++;
                i = mIdx;
            } else return false;
        }
        while (j < p.length && p[j] == '*') j++;
        return j == p.length;
    }
}
