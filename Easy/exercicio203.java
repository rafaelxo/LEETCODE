class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode resp = new ListNode(0);
        resp.next = head;
        ListNode curr = resp;
        while (curr.next != null) {
            if (curr.next.val == val) curr.next = curr.next.next;
            else curr = curr.next;
        }
        return resp.next;
    }
}
