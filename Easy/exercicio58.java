class exercicio58 {
    public int lengthOfLastWord(String s) {
        int i = s.length() - 1, resp = 0;
        while (i >= 0 && s.charAt(i) == ' ') i--;
        while (i >= 0 && s.charAt(i) != ' ') {
            resp++;
            i--;
        }
        return resp;
    }
}
