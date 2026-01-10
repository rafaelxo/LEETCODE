public class Solution {
    private ListNode GetKthNode(ListNode s, int k) {
        while (s != null && k > 0) {
            s = s.next;
            k--;
        }
        return s;
    }
    public ListNode ReverseKGroup(ListNode head, int k) {
        if (head == null || k <= 1) return head;
        ListNode resp = new ListNode(0, head);
        ListNode gPrev = resp;
        while (true) {
            ListNode kth = GetKthNode(gPrev, k);
            if (kth == null) break;
            ListNode gNext = kth.next;
            ListNode prev = gNext;
            ListNode curr = gPrev.next;
            while (curr != gNext) {
                ListNode tmp = curr.next;
                curr.next = prev;
                prev = curr;
                curr = tmp;
            }
            ListNode tmp2 = gPrev.next;
            gPrev.next = kth;
            gPrev = tmp2;
        }
        return resp.next;
    }
}
