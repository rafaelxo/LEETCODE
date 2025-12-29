class exercicio3 {
    public int lengthOfLongestSubstring(String s) {
        boolean[] arr = new boolean[128];
        int resp = 0, r = 0, l = 0;
        while (r < s.length()) {
            if (!arr[s.charAt(r)]) {
                arr[s.charAt(r)] = true;
                resp = Math.max(resp, r - l + 1);
                r++;
            } else {
                arr[s.charAt(l)] = false;
                l++;
            }
        }
        return resp;
    }
}
