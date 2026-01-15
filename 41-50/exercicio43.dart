class Solution {
    String multiply(String num1, String num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int n = num1.length, m = num2.length;
        List<int> res = List.filled(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            int d1 = num1.codeUnitAt(i) - 48;
            for (int j = m - 1; j >= 0; j--) {
                int d2 = num2.codeUnitAt(j) - 48;
                int sum = d1 * d2 + res[i + j + 1];
                res[i + j + 1] = sum % 10;
                res[i + j] += sum ~/ 10;
            }
        }
        StringBuffer sb = StringBuffer();
        int i = 0;
        while (i < res.length && res[i] == 0)i++;
        for (; i < res.length; i++) sb.write(res[i]);
        return sb.toString();
    }
}
