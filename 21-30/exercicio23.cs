public class Solution {
    private ListNode MergeTwo(ListNode a, ListNode b) {
        ListNode resp = new ListNode(0);
        var curr = resp;
        while (a != null && b != null) {
            if (a.val <= b.val) {
                curr.next = a;
                a = a.next;
            } else {
                curr.next = b;
                b = b.next;
            }
            curr = curr.next;
        }
        curr.next = a ?? b;
        return resp.next;
    }

    public ListNode MergeKLists(ListNode[] lists) {
        if (lists == null || lists.Length == 0) return null;
        int n = lists.Length;
        int gap = 1;
        while (gap < n) {
            for (int i = 0; i + gap < n; i += gap * 2) lists[i] = MergeTwo(lists[i], lists[i + gap]);
            gap *= 2;
        }
        return lists[0];
    }
}
