public class exercicio64 {
    public bool IsNumber(string s) {
        if (string.IsNullOrEmpty(s)) return false;
        bool isDig = false, isDot = false, isExp = false, isDigExp = true;
        for (int i = 0; i < s.Length; i++) {
            char c = s[i];
            if (char.IsDigit(c)) {
                isDig = true;
                isDigExp = true;
            }
            else if (c == '+' || c == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') return false;
            }
            else if (c == '.') {
                if (isDot || isExp) return false;
                isDot = true;
            }
            else if (c == 'e' || c == 'E') {
                if (isExp || !isDig) return false;
                isExp = true;
                isDigExp = false;
            }
            else return false;
        }
        return isDig && isDigExp;
    }
}
