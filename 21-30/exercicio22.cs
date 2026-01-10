public class exercicio22 {
    private void Backtrack(List<string> resp, string curr, int open, int close, int n) {
        if (curr.Length == 2 * n) {
            resp.Add(curr);
            return;
        }
        if (open < n) Backtrack(resp, curr + "(", open + 1, close, n);
        if (close < open) Backtrack(resp, curr + ")", open, close + 1, n);
    }

    public IList<string> GenerateParenthesis(int n) {
        List<string> resp = new List<string>();
        Backtrack(resp, "", 0, 0, n);
        return resp;
    }
}
