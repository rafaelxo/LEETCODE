class Solution {
    function divide($dividend, $divisor) {
        if ($dividend == -2147483648 && $divisor == -1) return 2147483647;
        $sign = (($dividend < 0) ^ ($divisor < 0)) ? -1 : 1;
        $a = abs($dividend);
        $b = abs($divisor);
        $resp = 0;
        for ($i = 31; $i >= 0; $i--) {
            if (($a >> $i) >= $b) {
                $resp += 1 << $i;
                $a -= $b << $i;
            }
        }
        return $sign * $resp;
    }
}
