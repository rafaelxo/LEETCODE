class exercicio76 {
    public String minWindow(String s, String t) {
        if (s.length() < t.length()) return "";
        int[] freq = new int[128];
        for (char c : t.toCharArray()) freq[c]++;
        int left = 0, count = t.length(), mLen = Integer.MAX_VALUE, stt = 0;
        for (int right = 0; right < s.length(); right++) {
            char r = s.charAt(right);
            if (freq[r] > 0) count--;
            freq[r]--;
            while (count == 0) {
                if (right - left + 1 < mLen) {
                    mLen = right - left + 1;
                    stt = left;
                }
                char l = s.charAt(left);
                freq[l]++;
                if (freq[l] > 0) count++;
                left++;
            }
        }
        return mLen == Integer.MAX_VALUE ? "" : s.substring(stt, stt + mLen);
    }
}
