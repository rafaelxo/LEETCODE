class exercicio5 {
    private int expand(int l, int r, char[] arr, int n) {
        while (l >= 0 && r < n && arr[l] == arr[r]) {
            l--;
            r++;
        }
        return r - l - 1;
    }

    public String longestPalindrome(String s) {
        int n = s.length();
        if (n < 2) return s;
        char[] arr = s.toCharArray();
        int start = 0, end = 0;
        for (int i = 0; i < n; i++) {
            if ((n - i) * 2 <= end - start + 1) break;
            int len1 = expand(i, i, arr, n);
            int len2 = expand(i, i + 1, arr, n);
            int len = Math.max(len1, len2);
            if (len > end - start + 1) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substring(start, end + 1);
    }
}
