var removeNthFromEnd = function (head, n) {
    let resp = new ListNode(0, head);
    let aux = resp;
    let back = resp;
    for (let i = 0; i < n; i++) aux = aux.next;
    while (aux.next !== null) {
        aux = aux.next;
        back = back.next;
    }
    back.next = back.next.next;
    return resp.next;
};
