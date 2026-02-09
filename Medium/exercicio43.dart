class Solution {
    String multiply(String num1, String num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int n = num1.length, m = num2.length;
        List<int> aux = List.filled(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            int c1 = num1.codeUnitAt(i) - 48;
            for (int j = m - 1; j >= 0; j--) {
                int c2 = num2.codeUnitAt(j) - 48;
                int sum = c1 * c2 + aux[i + j + 1];
                aux[i + j + 1] = sum % 10;
                aux[i + j] += sum ~/ 10;
            }
        }
        StringBuffer resp = StringBuffer();
        int i = 0;
        while (i < aux.length && aux[i] == 0) i++;
        for (; i < aux.length; i++) resp.write(aux[i]);
        return resp.toString();
    }
}
