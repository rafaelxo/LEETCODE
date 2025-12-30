import java.util.Arrays;

class exercicio3 {
    public int lengthOfLongestSubstring(String s) {
        int[] last = new int[128];
        Arrays.fill(last, -1);
        int resp = 0;
        int i = 0;
        for (int j = 0; j < s.length(); j++) {
            if (last[s.charAt(j)] >= i) i = last[s.charAt(j)] + 1;
            last[s.charAt(j)] = j;
            resp = Math.max(resp, j - i + 1);
        }
        return resp;
    }
}
