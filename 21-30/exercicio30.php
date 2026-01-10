class Solution {
    function findSubstring($s, $words) {
        if (!$words) return [];
        $wl = strlen($words[0]);
        if (strlen($s) < $wl * count($words)) return [];
        $need = array_count_values($words);
        $resp = [];
        for ($i = 0; $i < $wl; $i++) {
            $left = $i;
            $count = 0;
            $win = [];
            for ($j = $i; $j + $wl <= strlen($s); $j += $wl) {
                $w = substr($s, $j, $wl);
                if (!isset($need[$w])) {
                    $win = [];
                    $count = 0;
                    $left = $j + $wl;
                    continue;
                }
                $win[$w] = ($win[$w] ?? 0) + 1;
                $count++;
                while ($win[$w] > $need[$w]) {
                    $lw = substr($s, $left, $wl);
                    $win[$lw]--;
                    $left += $wl;
                    $count--;
                }
                if ($count === count($words)) $resp[] = $left;
            }
        }
        return $resp;
    }
}
