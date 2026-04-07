class exercicio82 {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode resp = new ListNode(0, head);
        ListNode prev = resp;
        while (head != null) {
            if (head.next != null && head.val == head.next.val) {
                while (head.next != null && head.val == head.next.val) head = head.next;
                prev.next = head.next;
            } else prev = prev.next;
            head = head.next;
        }
        return resp.next;
    }
}
