class Solution {
    function strStr($haystack, $needle) {
        if (strlen($needle) == 0) return 0;
        for ($i = 0; $i <= strlen($haystack) - strlen($needle); $i++) {
            if (substr($haystack, $i, strlen($needle)) === $needle) return $i;
        }
        return -1;
    }
}
