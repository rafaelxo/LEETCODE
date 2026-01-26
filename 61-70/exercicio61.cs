public class exercicio61 {
    public ListNode RotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k == 0) return head;
        int length = 1;
        ListNode last = head;
        while (last.next != null) {
            last = last.next;
            length++;
        }
        k %= length;
        if (k == 0) return head;
        last.next = head;
        int steps = length - k;
        ListNode nLast = head;
        for (int i = 1; i < steps; i++) nLast = nLast.next;
        ListNode resp = nLast.next;
        nLast.next = null;
        return resp;
    }
}
