class Solution {
  ListNode? partition(ListNode? head, int x) {
    ListNode resp = ListNode(0);
    ListNode dummy = ListNode(0);
    ListNode lss = resp;
    ListNode grt = dummy;
    while (head != null) {
      if (head.val < x) {
        lss.next = head;
        lss = lss.next!;
      } else {
        grt.next = head;
        grt = grt.next!;
      }
      head = head.next;
    }
    grt.next = null;
    lss.next = dummy.next;
    return resp.next;
  }
}
