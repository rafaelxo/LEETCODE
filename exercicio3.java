import java.util.Arrays;

class exercicio3 {
    public int lengthOfLongestSubstring(String s) {
        int[] last = new int[128];
        int j = 0, max = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            j = Math.max(j, last[c]);
            last[c] = i + 1;
            max = Math.max(max, i - j + 1);
        }
        return max;
    }
}
