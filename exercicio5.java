class exercicio5 {
    private int func(int l, int r, String s) {
        while (l >= 0 && r < s.length() && s.charAt(l) == s.charAt(r)) {
            l--;
            r++;
        }
        return r - l - 1;
    }

    public String longestPalindrome(String s) {
        int ini = 0;
        int end = 0;
        for (int i = 0; i < s.length(); i++) {
            int str = func(i, i, s), enq = func(i, i + 1, s);
            int tam = Math.max(str, enq);
            if (tam > end - ini + 1) {
                ini = i - (tam - 1) / 2;
                end = i + (tam) / 2;
            }
        }
        return s.substring(ini, end + 1);
    }
}
