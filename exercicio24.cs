public class Solution {
    public ListNode SwapPairs(ListNode head) {
        ListNode resp = new ListNode(0, head);
        ListNode prev = resp;
        while (prev.next != null && prev.next.next != null) {
            ListNode frst = prev.next;
            ListNode scnd = frst.next;
            frst.next = scnd.next;
            scnd.next = frst;
            prev.next = scnd;
            prev = frst;
        }
        return resp.next;
    }
}
