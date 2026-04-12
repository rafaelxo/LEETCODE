class Solution {
    function reverseBetween($head, $left, $right) {
        if ($head == null || $left == $right) return $head;
        $dummy = new ListNode(0);
        $dummy->next = $head;
        $prev = $dummy;
        for ($i = 1; $i < $left; $i++) {
            $prev = $prev->next;
        }
        $curr = $prev->next;
        for ($i = 0; $i < $right - $left; $i++) {
            $temp = $curr->next;
            $curr->next = $temp->next;
            $temp->next = $prev->next;
            $prev->next = $temp;
        }
        return $dummy->next;
    }
}
